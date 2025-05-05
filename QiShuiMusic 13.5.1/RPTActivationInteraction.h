@interface RPTActivationInteraction : NSObject
@property (nonatomic) Q action;
@property (nonatomic) UIWindow window;
- (unsigned long long)action;
- (void)setAction:;
- (void).cxx_destruct;
- (void)setWindow:;
- (id)window;
- (void)invokeWithComposer:duration:;
- (id)reversedInteraction;
- (id)initForAction:window:;
- (id)actionPoint;
@end
