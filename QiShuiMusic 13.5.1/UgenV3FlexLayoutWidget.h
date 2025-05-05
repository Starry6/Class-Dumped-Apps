@interface UgenV3FlexLayoutWidget : UgenWidget
@property (nonatomic) NSArray children;
@property (nonatomic) UgenV3FlexLayoutView containerView;
@property (nonatomic) q flexibility;
- (void)setFlexibility:;
- (long long)flexibility;
- (id)ugenView;
- (void)v3_addwidget:;
- (void)v3_layout;
- (void)v3_p_configureFlexLayoutRoot;
- (id)init;
- (id)containerView;
- (void)setContainerView:;
- (id)children;
- (void)setChildren:;
- (void).cxx_destruct;
@end
