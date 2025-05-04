@interface AWEIMSwipeActionButtonWrapperView : UIView
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} contentRect;
@property (nonatomic) AWEIMSwipeActionButton swipeActionButton;
@property (nonatomic) UIColor actionBackgroundColor;
- (void)__configureBackgroundColorWithAction:;
- (void)setActionBackgroundColor:;
- (id)actionBackgroundColor;
- (id)swipeActionButton;
- (id)initWithFrame:action:orientation:contentWidth:;
- (void)updateReconfirmExpanded:withVisibleWidth:;
- (void)setSwipeActionButton:;
- (id)contentRect;
- (void)setContentRect:;
- (void)drawRect:;
- (void).cxx_destruct;
@end
