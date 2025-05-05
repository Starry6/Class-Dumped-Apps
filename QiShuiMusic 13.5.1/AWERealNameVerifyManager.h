@interface AWERealNameVerifyManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (unsigned long long)realNameVerifyStatus;
+ (void)setRealNameVerifyStatus:;
+ (void)showRealNameVerify;
+ (void)showRealNameVerifyForECommerce;
+ (void)showRealNameVerifyForECommerceWithVerifyDidSucceedBlock:;
+ (void)showRealNameVerifyNavForLive;
+ (void)showRealNameVerifyWithType:verifyDidSucceedBlock:;
+ (void)updateVerifyStatus:;
+ (id)updateVerifyStatusURLString;
@end
