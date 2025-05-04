@interface AWEKnowledgeAlbumPreviewCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIColor imageBackgroundColor;
- (void)p_setupViews;
- (void)updateSelected:;
- (id)imageBackgroundColor;
- (void)setImageBackgroundColor:;
- (void)updateWithModel:placeholderImageForAlbum:;
- (void)applyLayoutAttributes:;
- (void)dealloc;
- (void)prepareForReuse;
- (void)addObserver;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)updateColor;
+ (id)reuseIdentifier;
@end
