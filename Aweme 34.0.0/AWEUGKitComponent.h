@interface AWEUGKitComponent : NSObject
@property (nonatomic) <AWEPzComponentProtocol> component;
- (void)hideComponent;
- (void)showComponent;
- (void)hideAndRemoveComponent;
- (void)addAndShowComponent;
- (id)initWithPzComponent:;
- (void)addComponent;
- (void)consumeComponent;
- (void)removeComponent;
- (id)component;
- (void).cxx_destruct;
- (void)setComponent:;
@end
