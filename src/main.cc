#include <cstdio>
#include <capnp/message.h>
#include <capnp/serialize-packed.h>
#include <kj/io.h>
#include "capnp/serialize.h"
#include "main.capnp.h"



int main(void)
{
    printf("Hello capn\n");
    kj::VectorOutputStream vos;
    ::capnp::MallocMessageBuilder mb;
    // ::capnp::List<Person>::Builder people = addressBook.initPeople(2);
    MessageList::Builder mlb = mb.initRoot<MessageList>();
    ::capnp::List<Message>::Builder messages = mlb.initMessages(2);

    for (Message::Builder msgb : messages)
    {
        printf("Doing a message\n");
        msgb.setMessageId(1234);
        auto inaddr = msgb.initAddress().initInaddr();
        inaddr.setAddress(0);
        inaddr.setPort(1234);
    }
    capnp::writePackedMessage(vos, mb);

    auto arr = vos.getArray();
    for(auto a : arr)
    {
        printf("%02hhx ", a);
    }
    
    printf("\nmlbsize %lu\n", arr.size());
}