#ifndef DAK_UTIL_NO_COPY_H
#define DAK_UTIL_NO_COPY_H

namespace dak
{
namespace util
{
class NoCopy
{
public:
	NoCopy(const NoCopy &) = delete;
	NoCopy &operator=(const NoCopy) = delete;
	NoCopy(NoCopy &&) = delete;
	NoCopy &operator=(NoCopy &&) = delete;
};
} // namespace util
} // namespace dak

#endif