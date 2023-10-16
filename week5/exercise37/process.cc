
void process(size_t begin, size_t end, char const *const *args)
{
    for
    (
        char const *const *argsBegin = args + begin,
        *const *argsEnd = args + end;
        argsBegin != argsEnd;
        ++argsBegin
    )
        process(begin, end, argsBegin);
}
