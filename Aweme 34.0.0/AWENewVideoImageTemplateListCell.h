@interface AWENewVideoImageTemplateListCell : UICollectionViewCell
@property (nonatomic) UIView selectedIndicatorView;
@property (nonatomic) UIView coverView;
@property (nonatomic) UIImageView previewImageView;
@property (nonatomic) BOOL isSelect;
- (void)setIsSelect:;
- (id)selectedIndicatorView;
- (void)setSelectedIndicatorView:;
- (BOOL)isSelect;
- (void)setCoverImageCornerRadius;
- (void)configCoverWith:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)coverView;
- (void)setCoverView:;
- (void)setupUI;
- (id)previewImageView;
- (void)setPreviewImageView:;
@end
