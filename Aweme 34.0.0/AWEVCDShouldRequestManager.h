@interface AWEVCDShouldRequestManager : NSObject
- (id)aAWEVCDAuthorizeCommonAdapter;
+ (void)setHasAlertAuthorizeAccount:;
+ (void)setHasAlertAuthorizeRelation:;
+ (BOOL)isRegisterFromHotsoon;
+ (BOOL)hasAlertAuthorizeRelation;
+ (Class)aAWEVCDAuthorizeCommonAdapterClass;
+ (BOOL)shouldRequestRelation;
+ (BOOL)hasAlertAuthorizeAccount;
+ (BOOL)shouldRequestAccount;
@end
