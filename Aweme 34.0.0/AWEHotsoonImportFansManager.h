@interface AWEHotsoonImportFansManager : NSObject
@property (nonatomic) <AWEAccountManagerProtocol> accountManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showInstallHuoshanAlert;
- (void)showUpdateHuoshanAlert;
- (void)importFans:completion:;
- (id)accountManager;
- (void).cxx_destruct;
- (void)setAccountManager:;
+ (id)titleLowVersion;
+ (id)textLowVersion;
+ (id)titleNotInstalled;
+ (id)textNotInstalled;
+ (id)sharedInstance;
@end
