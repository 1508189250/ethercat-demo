
using namespace std;

class ConfigLoader {
 
  public: ConfigLoader();

  public: void applyConfiguration(ec_master_t *master, ec_domain *domain1, vector<SlaveConfig> *slaveConfigVector);

  public: vector<SlaveConfig> loadConfiguration(string configFile);

  private: vector<Pdo> loadPdoInfo(const char* type, TiXmlElement *deviceElem, int smIndex, int n_pdos);

  private: unsigned int charToInt(const char* input);
  private: unsigned int hexCharToInt(const char* input);

  private: int countChildren(TiXmlNode* parent);

  private: int countChildren(TiXmlNode* parent, const char* name);
  private: int countPdoChildren(TiXmlNode* parent, const char* name, int smIndex);

  private: void printSyncs(int nSyncs, ec_sync_info_t *sync);
};
