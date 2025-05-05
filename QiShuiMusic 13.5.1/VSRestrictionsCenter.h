@interface VSRestrictionsCenter : NSObject
@property (nonatomic) VSManagedProfileConnection profileConnection;
@property (nonatomic) BOOL accountModificationAllowed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)profileConnection;
- (void)setProfileConnection:;
- (void)profileConnectionSettingsChanged:;
- (void)profileConnectionProfileChanged:;
- (void)_updateAccountModificationAllowed;
- (BOOL)_canInstallAppsAtAll;
- (BOOL)canInstallAppWithRating:;
- (BOOL)isAcountModificationAllowed;
- (void)setAccountModificationAllowed:;
+ (id)defaultRestrictionsCenter;
@end
