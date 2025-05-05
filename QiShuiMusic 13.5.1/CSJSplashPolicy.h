@interface CSJSplashPolicy : NSObject
@property (nonatomic) BUPolicyCenter policyCenter;
- (id)policyCenter;
- (id)queryRitSettings:;
- (void)setPolicyCenter:;
- (id)splashIdentifier:;
- (void)start;
- (void)prepare;
- (void).cxx_destruct;
+ (long long)loadTypeForRit:;
+ (id)splashIdentifier:;
+ (id)sharedInstance;
@end
