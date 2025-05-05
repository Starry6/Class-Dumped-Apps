@interface AXMOutputComponent : NSObject
@property (nonatomic) q componentState;
- (id)init;
- (BOOL)canHandleRequest:;
- (void)transitionToState:completion:;
- (id)description;
- (void)handleRequest:completion:;
- (long long)componentState;
- (void)setComponentState:;
+ (BOOL)isSupported;
@end
