@interface AWETeenExternalAgeGuidePageHeaderView : UIView
@property (nonatomic) UILabel leftTitleLabel;
@property (nonatomic) UILabel rightTitleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) BOOL isSmallScreen;
@property (nonatomic) double leftTitleFontSize;
@property (nonatomic) double rightTitleFontSize;
@property (nonatomic) double subTitleFontSize;
@property (nonatomic) {CGSize=dd} leftTitleSize;
- (double)subTitleFontSize;
- (void)setSubTitleFontSize:;
- (void)p_setupViews;
- (id)leftTitleLabel;
- (void)setLeftTitleLabel:;
- (id)leftTitleSize;
- (double)leftTitleFontSize;
- (double)rightTitleFontSize;
- (id)initWithLeftTitle:rightTitle:subTitle:;
- (void)setLeftTitleFontSize:;
- (void)setRightTitleFontSize:;
- (void)setLeftTitleSize:;
- (BOOL)isSmallScreen;
- (void).cxx_destruct;
- (void)setIsSmallScreen:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)rightTitleLabel;
- (void)setRightTitleLabel:;
@end
