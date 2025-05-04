@interface AWEAccountManager : NSObject
@property (nonatomic) NSMutableArray thirdAccountUsernameStrArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPhoneBinded;
- (id)aAWEUserCenterModuleServiceDOUYINHTSAdapter;
- (id)aAWEUserCenterModuleServiceCommonAdapter;
- (BOOL)isThirdPlatformBindedWithType:;
- (void)requestBindWithPlatform:completion:;
- (void)fetchConnectUserProfileCallback:;
- (void)requestUnbindWithPlatform:completion:;
- (id)thirdPlatformUsernameWithPlatformType:;
- (BOOL)isTouXiDongSyncForbidden;
- (unsigned long long)_transferToHTSAccountPlatformFrom:;
- (id)thirdAccountUsernameStrArray;
- (void)requestBusinessAccountFallbackEntranceData:;
- (void)setThirdAccountUsernameStrArray:;
- (void)refresh;
- (void).cxx_destruct;
- (id)phoneString;
+ (Class)aAWEUserCenterModuleServiceDOUYINHTSAdapterClass;
+ (Class)aAWEUserCenterModuleServiceCommonAdapterClass;
@end
