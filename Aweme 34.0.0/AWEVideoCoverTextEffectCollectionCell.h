@interface AWEVideoCoverTextEffectCollectionCell : UICollectionViewCell
@property (nonatomic) UIView borderView;
@property (nonatomic) UIImageView effectImageView;
@property (nonatomic) UIImageView statusIndicator;
@property (nonatomic) AWEScrollStringLabel nameLabel;
@property (nonatomic) q downloadStatus;
- (id)createRotationAnimation;
- (void)startDownloadAnimation;
- (id)effectImageView;
- (void)stopDownloadAnimation;
- (void)configCellWithModel:selected:;
- (void)setEffectImageView:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void)commonInit;
- (id)nameLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)borderView;
- (void)setBorderView:;
- (void)setNameLabel:;
- (long long)downloadStatus;
- (void)setDownloadStatus:;
- (id)statusIndicator;
- (void)setStatusIndicator:;
@end
