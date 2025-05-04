@interface AWEIMMessageExchangeImageTagComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMUILabelPresenter descLabel;
@property (nonatomic) AWEIMUIViewPresenter backgroundView;
- (id)descLabel;
- (void)setDescLabel:;
- (void)componentDidMounted:;
- (void)setBackgroundView:;
- (id)backgroundView;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
