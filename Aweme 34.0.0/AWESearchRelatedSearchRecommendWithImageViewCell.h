@interface AWESearchRelatedSearchRecommendWithImageViewCell : UICollectionViewCell
@property (nonatomic) UILabel wordLabel;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UIImageView arrowImageView;
- (id)wordLabel;
- (void)setWordLabel:;
- (void)configUI;
- (void)updateWithModel:UIInfoModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)backgroundImageView;
- (void)setBackgroundImageView:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
