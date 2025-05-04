@interface AWEPadCastLoginManager : NSObject
@property (nonatomic) NSString state;
- (void)trackLoginFailureWithParams:error:;
- (void)getTokenWithState:completion:;
- (void)loginWithToken:params:;
- (id)getState;
- (id)state;
- (void).cxx_destruct;
- (void)setState:;
+ (id)sharedInstance;
@end
