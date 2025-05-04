@interface AWECompanyChanllengeSecondCell : UITableViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel userCountLabel;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)userCountLabel;
- (void)setUserCountLabel:;
- (void)configWithChallenge:;
- (id)initWithStyle:reuseIdentifier:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setNameLabel:;
- (void)_setupUI;
+ (id)identifier;
@end
