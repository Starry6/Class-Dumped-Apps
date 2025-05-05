@interface IESLiveSaaSContainerKitOperateHandler : NSObject
@property (nonatomic) UIView<HTSLiveSaaSPluginLayoutView> pluginView;
@property (nonatomic) Q state;
@property (nonatomic) @? onStateChange;
- (id)onStateChange;
- (void)setOnStateChange:;
- (void)setState:;
- (unsigned long long)state;
- (void).cxx_destruct;
- (id)pluginView;
- (void)setPluginView:;
@end
