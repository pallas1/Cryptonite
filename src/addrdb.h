//

#include <string>
#include <map>
#include <boost/filesystem/path.hpp>

class CSubNet;
class CAddrMan;

/** Access to the (IP) address database (peers.dat) */
class CAddrDB
{
private:
    boost::filesystem::path pathAddr;
public:
    CAddrDB();
    bool Write(const CAddrMan& addr);
    bool Read(CAddrMan& addr);
};

