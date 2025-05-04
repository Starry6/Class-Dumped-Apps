@interface AWEGuestLikeListItemCell : UICollectionViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIImageView likeIconView;
@property (nonatomic) UIImageView albumIconView;
@property (nonatomic) UILabel likeCountLabel;
@property (nonatomic) AWEGradientView gradientView;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)likeCountLabel;
- (id)likeIconView;
- (id)albumIconView;
- (void)setAlbumIconView:;
- (void)setLikeIconView:;
- (void)setLikeCountLabel:;
- (id)gradientView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)setupSubviews;
@end
