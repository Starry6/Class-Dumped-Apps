@interface IESECTabKitTopTabView : IESECTabKitForwardView
@property (nonatomic) IESECSlidingTabbarView tabBarView;
@property (nonatomic) CAGradientLayer rightMaskLayer;
- (id)rightMaskLayer;
- (void)setRightMaskLayer:;
- (void)setTabBarView:;
- (id)tabBarView;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
