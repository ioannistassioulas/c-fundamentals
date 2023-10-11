
void process(size_t begin, size_t end, char const *const *args)
{
    for
    (
        *argsBegin = args + begin,
        *argsEnd = args + end;
        argsBegin != argsEnd;
        ++argsBegin
    )
        process(*argsBegin);
}
