@interface AWETeenCountryCodeView : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UIView separationLine;
@property (nonatomic) NSString countryCode;
@property (nonatomic) @? didChangeCountryCode;
- (id)separationLine;
- (void)setSeparationLine:;
- (void)updateLabel:;
- (id)didChangeCountryCode;
- (void)updateCountryCode:;
- (void)setDidChangeCountryCode:;
- (void)setLabel:;
- (void)setCountryCode:;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (id)label;
- (void).cxx_destruct;
- (id)countryCode;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
