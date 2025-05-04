@interface AWEIMSecurityRemindRequest : NSObject
+ (void)requestSecurityGlobalToastConfigWithParams:onComplete:;
+ (void)reportSecurityGlobalToastStatusWithParams:onComplete:;
+ (void)requestSecurityGlobalFloaterConfigWithParams:onComplete:;
+ (void)reportSecurityGlobalFloaterStatusWithParams:onComplete:;
+ (void)requestSecurityToastConfigWithParams:onComplete:;
+ (void)reportSecurityToastStatusWithParams:onComplete:;
+ (void)requestSecurityTopTipConfigWithParams:onComplete:;
+ (void)reportSecurityTopTipStatusWithParams:onComplete:;
+ (id)domain;
@end
