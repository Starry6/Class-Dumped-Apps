@interface AWEPOIImageUploadPreviewCollectionViewCell : UICollectionViewCell
@property (nonatomic) q index;
@property (nonatomic) UIImageView contentImageView;
@property (nonatomic) UIImageView cancelImageView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) @? didTap;
- (void)setDidTap:;
- (id)cancelImageView;
- (void)setCancelImageView:;
- (void)setupMask;
- (void)updateWithIndex:;
- (void)setIndex:;
- (long long)index;
- (void)setCornerRadius:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)updateWithImage:;
- (id)contentImageView;
- (id)didTap;
- (void)tapAction;
- (void)setContentImageView:;
+ (double)cellHeight;
@end
