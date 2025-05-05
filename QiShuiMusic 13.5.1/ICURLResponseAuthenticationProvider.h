@interface ICURLResponseAuthenticationProvider : NSObject
@property (nonatomic) q interactionLevel;
- (id)initWithUserInteractionLevel:;
- (void)performAuthenticationToHandleResponse:toRequest:withCompletionHandler:;
- (void)performAuthenticationUsingRequestContext:withCompletionHandler:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (long long)interactionLevel;
+ (BOOL)supportsSecureCoding;
+ (id)defaultProvider;
@end
