@interface PDFIconCollectionViewCell_iOS : UICollectionViewCell
@property (nonatomic) UIButton actionsButton;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) PDFPage page;
- (id)page;
- (void)setPage:;
- (void)_commonInit;
- (void)setNeedsUpdate;
- (void)setSelected:;
- (void)prepareForReuse;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (void)setupSubviews;
- (void)setThumbnailWidth:;
- (void)updateOverlay;
- (void)updateAspectConstraintWithSize:;
- (id)actionsButton;
- (void)setActionsButton:;
@end
