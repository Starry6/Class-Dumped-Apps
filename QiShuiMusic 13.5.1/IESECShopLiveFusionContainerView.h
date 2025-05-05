@interface IESECShopLiveFusionContainerView : IESECRelationForwardView
@property (nonatomic) UIView tabBarView;
@property (nonatomic) UIView tabContainerView;
- (void)attachViewInfo:;
- (void)detachViewInfo:;
- (void)attachSubViews;
- (void)detachSubViews;
- (void)setTabBarView:;
- (void)setTabContainerView:;
- (id)tabBarView;
- (id)tabContainerView;
- (void)triggerLayout;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
