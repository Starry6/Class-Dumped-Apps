@interface GEOUserAccountInfo : NSObject
- (id)init;
- (BOOL)isCurrentICloudAccountManaged;
- (id)primaryICloudAccount;
- (BOOL)isCurrentICloudAccountUnderage;
- (void).cxx_destruct;
- (id)_primaryICloudAccountIsolated;
- (void)_accountStoreDidChange:;
+ (id)sharedInstance;
+ (BOOL)isCurrentICloudAccountManaged;
+ (BOOL)hasValidICloudAccountForAddingRatingsAndPhotos;
+ (id)primaryICloudAccount;
+ (BOOL)isAccountInfoAvailable;
+ (BOOL)isCurrentICloudAccountUnderage;
@end
