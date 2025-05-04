@interface AWEStarAtlasReviewStatusView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) NSString title;
@property (nonatomic) @? tapBlock;
- (void)setTapBlock:;
- (id)tapBlock;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)title;
- (id)titleLabel;
- (void)setImageView:;
- (void)setTitle:;
- (id)imageView;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupSubviews;
- (void)tapped:;
@end
