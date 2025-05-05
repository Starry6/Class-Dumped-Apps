@interface IMGroupBlocklistManager : NSObject
@property (nonatomic) NSDate lastModifiedDate;
- (id)init;
- (id)lastModifiedDate;
- (void)save;
- (void)setLastModifiedDate:;
- (void).cxx_destruct;
- (void)loadFromFile:;
- (void)reloadIfNeeded;
- (void)loadData;
- (id)initFromFile:;
- (BOOL)hasFileChanged;
- (void)blocklistGroupId:;
- (BOOL)isGroupInBlocklist:;
- (BOOL)isFeatureDisabled;
- (void)_updateLastModifiedDate:;
+ (id)sharedInstance;
+ (id)groupsBlocklistFilename;
@end
