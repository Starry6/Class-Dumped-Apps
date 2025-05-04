@interface AWENaviDuetModifyBackgroundPanelCell : UICollectionViewCell
@property (nonatomic) UIView borderView;
@property (nonatomic) UILabel thumbnailLabel;
@property (nonatomic) UIImageView thumbnailImageView;
@property (nonatomic) UIImageView cornerIconImageView;
@property (nonatomic) BOOL selectedCell;
@property (nonatomic) <AWENaviBackgroundProtocol> model;
- (id)cornerIconImageView;
- (void)resetCornerImageView;
- (BOOL)isSelectedCell;
- (void)showNewCornerIcon;
- (void)setCornerIconImageView:;
- (id)thumbnailLabel;
- (void)setThumbnailLabel:;
- (void)setModel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (id)borderView;
- (void)setBorderView:;
- (void)setupSubviews;
- (void)setThumbnailImageView:;
- (id)thumbnailImageView;
- (void)setSelectedCell:;
@end
