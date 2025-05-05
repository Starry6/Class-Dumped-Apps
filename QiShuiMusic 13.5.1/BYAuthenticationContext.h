@interface BYAuthenticationContext : NSObject
@property (nonatomic) NSString secret;
@property (nonatomic) LAContext underlyingContext;
- (void).cxx_destruct;
- (id)underlyingContext;
- (void)event:params:reply:;
- (id)initWithSecret:;
- (id)secret;
- (void)setSecret:;
- (void)setUnderlyingContext:;
+ (void)createContextWithSecret:policy:options:completion:;
@end
