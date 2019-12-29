#ifndef __sti__string_h__
#define __sti__string_h__

// Public Domain.


// length of the line, or length of the string if no \n found
size_t strlnlen(const char* s);

// strdup a line
char* strlndup(const char* s);

// line count;
size_t strlinecnt(const char* s);


// append b to a in a new buffer
char* strappend(const char* a, const char* const b);



#endif // __sti__string_h__
