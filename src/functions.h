typedef struct {
  char perm[11];
  int hlink[4];
  int hlinklens[5];
  char owner[128];
  char group[128];
  unsigned long int size[32];
  int sizelens[32];
  char date[17];
  char name[512];
} results;

typedef struct {
  char path[1024];
  int topfileref;
  int selected;
} history;

void readline(char *buffer, int buflen, char *oldbuf);
char * dirFromPath (const char* myStr);
int check_dir(char *pwd);
void mk_dir(char *path);
void copy_file(char *source_input, char *target_input);
void delete_file(char *source_input);
int check_last_char(const char *str, const char *chk);
int check_first_char(const char *str, const char *chk);
int seglength(const void *seg, char *segname, int LEN);
int cmp_str(const void *lhs, const void *rhs);
int cmp_int(const void *lhs, const void *rhs);
int cmp_dflist_name(const void *lhs, const void *rhs);
int cmp_dflist_date(const void *lhs, const void *rhs);
int cmp_dflist_size(const void *lhs, const void *rhs);
results* get_dir(char *pwd);
results* reorder_ob(results* ob, char *order);
void display_dir(char *pwd, results* ob, int topfileref, int selected);
void set_history(char *pwd, int topfileref, int selected);
long GetAvailableSpace(const char* path);
long GetUsedSpace(const char* path);
void SendToPager(const char* object);
void SendToEditor(const char* object);
void CheckEnv(const char* key);
void LaunchShell();
int UpdateOwnerGroup(const char* object, const char* pwdstr, const char* grpstr);
int RenameObject(const char* source, const char* dest);