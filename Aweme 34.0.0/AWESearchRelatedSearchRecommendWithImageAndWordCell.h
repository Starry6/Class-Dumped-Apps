@interface AWESearchRelatedSearchRecommendWithImageAndWordCell : UICollectionViewCell
@property (nonatomic) UILabel wordLabel;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView imageMaskView;
@property (nonatomic) q uiStyle;
- (id)wordLabel;
- (void)setWordLabel:;
- (void)updateWithModel:UIInfoModel:;
- (id)imageMaskView;
- (void)setImageMaskView:;
- (void)setUiStyle:;
- (id)initWithFrame:;
- (long long)uiStyle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
- (void)setupUI;
- (void)updateUI;
@end
