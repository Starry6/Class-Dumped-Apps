@interface AWEDislikeLimitTipView : UIView
@property (nonatomic) UILabel leftLabel;
@property (nonatomic) UILabel rightLabel;
@property (nonatomic) UILabel separatorLabel;
- (void)configSubviews;
- (id)separatorLabel;
- (void)setSeparatorLabel:;
- (void)setTextForLeft:;
- (void)setTextForRight:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)leftLabel;
- (id)rightLabel;
- (void)setLeftLabel:;
- (void)setRightLabel:;
@end
