@interface AWEIMHalfScreenContactTableViewHeaderCell : UIButton
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel featureLabel;
@property (nonatomic) UIImageView tapImageView;
@property (nonatomic) UIView separatorLine;
- (void)configWithType:;
- (void)p_setupUI;
- (void)setFeatureLabel:;
- (void)setTapImageView:;
- (id)tapImageView;
- (id)init;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)setIconImageView:;
- (id)featureLabel;
- (id)separatorLine;
- (void)setSeparatorLine:;
+ (id)identifier;
@end
