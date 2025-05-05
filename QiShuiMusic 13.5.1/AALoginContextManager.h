@interface AALoginContextManager : NSObject
@property (nonatomic) AAStorableLoginContext stashedContext;
- (id)init;
- (void).cxx_destruct;
- (id)stashedContext;
- (void)setStashedContext:;
- (void)persistStashedContext;
+ (id)sharedManager;
+ (void)stashLoginResponseWithAuthenticationResults:cloudKitToken:;
@end
