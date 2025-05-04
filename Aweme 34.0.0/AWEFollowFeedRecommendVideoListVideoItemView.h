@interface AWEFollowFeedRecommendVideoListVideoItemView : UIView
@property (nonatomic) BOOL isBigCardStyle;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) CAGradientLayer bgGradientLayer;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)descLabel;
- (void)setDescLabel:;
- (void)setIsBigCardStyle:;
- (BOOL)isBigCardStyle;
- (id)bgGradientLayer;
- (void)setBgGradientLayer:;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setIconImageView:;
@end
