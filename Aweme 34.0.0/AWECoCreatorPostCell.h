@interface AWECoCreatorPostCell : UICollectionViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIImageView likeIcon;
@property (nonatomic) UILabel likeCountLabel;
@property (nonatomic) UIView maskLayerView;
@property (nonatomic) UILabel awemeCountLabel;
@property (nonatomic) AWEGradientView bottomGradientView;
@property (nonatomic) DUXTextTag videoTag;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)videoTag;
- (void)setVideoTag:;
- (id)likeCountLabel;
- (id)likeIcon;
- (id)maskLayerView;
- (void)setMaskLayerView:;
- (id)awemeCountLabel;
- (void)updateWithModel:awemeCount:;
- (void)setAwemeCountLabel:;
- (void)setLikeCountLabel:;
- (void)setLikeIcon:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)configureSubviews;
- (id)bottomGradientView;
- (void)setBottomGradientView:;
+ (id)identifier;
@end
