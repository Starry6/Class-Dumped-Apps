@interface MFRoundedCornersStackView : UIStackView
@property (nonatomic) double cornerRadius;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)setCornerRadius:;
- (double)cornerRadius;
- (void)mf_addArrangedSubviews:;
- (void)updateRoundedCorners;
@end
