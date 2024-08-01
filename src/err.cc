extern "C" {
char err[] = "";

char* __wrap_strerror(int x)
{
    return err;
}
}