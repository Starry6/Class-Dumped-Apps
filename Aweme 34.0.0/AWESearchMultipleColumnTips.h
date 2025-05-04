@interface AWESearchMultipleColumnTips : UIView
@property (nonatomic) DUXBaseImageView arrowIcon;
@property (nonatomic) DUXBaseImageView bubbleBgView;
@property (nonatomic) DUXBaseLabel bubbleLabel;
@property (nonatomic) NSString tipsText;
- (id)tipsText;
- (id)arrowIcon;
- (void)setArrowIcon:;
- (void)setTipsText:;
- (void)setBubbleLabel:;
- (id)bubbleLabel;
- (void)showBubble;
- (void)setBubbleBgView:;
- (id)bubbleBgView;
- (void)hiddenBubble;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupLayout;
@end
