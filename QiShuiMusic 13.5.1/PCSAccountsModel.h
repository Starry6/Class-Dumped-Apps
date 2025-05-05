@interface PCSAccountsModel : NSObject
@property (nonatomic) ACAccountStore store;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) BOOL accountsChanged;
@property (nonatomic) NSString username;
@property (nonatomic) NSString dsid;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString lastError;
- (id)username;
- (id)init;
- (id)dsid;
- (void)setStore:;
- (void)setAccountsChanged:;
- (id)identifier;
- (BOOL)accountsChanged;
- (void).cxx_destruct;
- (void)faultIfCurrentPersonaIsDataSeparated;
- (void)update;
- (void)setQueue:;
- (void)_accountStoreDidChange:;
- (id)store;
- (id)queue;
- (id)lastError;
+ (id)accountForCurrentPersona;
+ (id)settingsKeyForKey:error:;
+ (BOOL)currentPersonaSupportsPrimaryAccount:;
+ (id)defaultAccountsModel;
@end
