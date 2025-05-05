@interface CJPayCoupleLabelView : UIView
@property (nonatomic) CJPayPaddingLabel firstLabel;
@property (nonatomic) CJPayPaddingLabel secondLabel;
@property (nonatomic) UIFont font;
- (void)updateCoupleLabelContents:;
- (void)updateCoupleLableForSignStatus;
- (id)intrinsicContentSize;
- (void)setFont:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)font;
- (id)firstLabel;
- (void)setFirstLabel:;
- (id)secondLabel;
- (void)setSecondLabel:;
@end
