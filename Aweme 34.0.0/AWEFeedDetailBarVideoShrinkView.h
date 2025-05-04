@interface AWEFeedDetailBarVideoShrinkView : AWEFeedDetailBarActionBaseView
@property (nonatomic) UIView verticalSeparateLine;
@property (nonatomic) UIButton shrinkBtn;
@property (nonatomic) @? shrinkBtnHandler;
- (void)setShrinkBtnHandler:;
- (id)shrinkBtn;
- (id)shrinkBtnHandler;
- (void)shrinkBtnClicked;
- (id)verticalSeparateLine;
- (void)setVerticalSeparateLine:;
- (void)setShrinkBtn:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)configureSubviews;
- (double)viewHeight;
- (double)viewWidth;
- (void)configureConstraints;
@end
