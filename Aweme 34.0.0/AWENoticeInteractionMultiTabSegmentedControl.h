@interface AWENoticeInteractionMultiTabSegmentedControl : UIView
@property (nonatomic) q selectedIndex;
@property (nonatomic) <_TtP13AWENoticeImpl52AWENoticeInteractionMultiTabSegmentedControlDelegate_> delegate;
@property (nonatomic) _TtC13AWENoticeImpl36AWENoticeInteractionSegmentedControl tabbarView;
@property (nonatomic) UIView bottomLineView;
- (void)segmentedControl:didSelectItemAt:;
- (void)segmentedControl:didRepeatTapItemAt:;
- (id)bottomLineView;
- (id)initWithDefaultSelectedIndex:delegate:;
- (id)tabbarView;
- (void)setTabbarView:;
- (void)setBottomLineView:;
- (id)delegate;
- (id)initWithFrame:;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)initWithCoder:;
@end
