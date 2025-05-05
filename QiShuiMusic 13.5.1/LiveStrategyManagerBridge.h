@interface LiveStrategyManagerBridge : NSObject
@property (nonatomic) {shared_ptr<livestrategy::IVeStrategyManager>=^{IVeStrategyManager}^{__shared_weak_count}} strategyManager;
- (id)strategyManager;
- (void)setStrategyManager:;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (id)executeCommand:command:hashCode:info:;
+ (id)sharedInstance;
@end
