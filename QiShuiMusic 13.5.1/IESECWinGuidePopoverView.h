@interface IESECWinGuidePopoverView : UIView
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel guideLabel;
@property (nonatomic) Q popoverDirection;
@property (nonatomic) double arrowOffset;
- (void)updateGuideLabelTextWithString:;
- (id)guideLabel;
- (id)initWithPopoverDirection:;
- (unsigned long long)popoverDirection;
- (void)setGuideLabel:;
- (void)setPopoverDirection:;
- (id)contentView;
- (void)setArrowOffset:;
- (double)arrowOffset;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)arrowView;
- (void)setArrowView:;
- (void)setUpConstraints;
@end
