@interface AWERealNameVerifyManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)bindPhone;
+ (void)updateVerifyStatus:;
+ (void)showRealNameVerifyNavForLive;
+ (void)showRealNameVerifyForECommerceWithVerifyDidSucceedBlock:;
+ (void)showRealNameVerifyForECommerce;
+ (unsigned long long)realNameVerifyStatus;
+ (void)showRealNameVerify;
+ (void)_showRealNameDetailPage;
+ (void)showRealNameVerifyWithType:verifyDidSucceedBlock:;
+ (id)realNameVerifyUrlWithType:;
+ (id)_realNameVerifyUrlWithType:;
+ (id)updateVerifyStatusURLString;
+ (void)setRealNameVerifyStatus:;
+ (BOOL)checkZhimaValidWithType:;
+ (void)showRealNameDetailPage;
@end
