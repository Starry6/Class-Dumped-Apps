@interface IESECGoodsDetailImagesCollectionViewCell : UICollectionViewCell
@property (nonatomic) IESECUIImageView imageView;
@property (nonatomic) IESECGoodsDetailImagesDataModel dataModel;
@property (nonatomic) IESECGoodsDetailImagesMetaModel metaModel;
@property (nonatomic) q index;
@property (nonatomic) IESECButton moreInfoButton;
@property (nonatomic) UIView moreInfoBGView;
- (void)clickImagePreview;
- (id)metaModel;
- (id)moreInfoBGView;
- (void)setMetaModel:;
- (void)setMoreInfoBGView:;
- (void)updateWithViewModel:index:;
- (void)prepareForReuse;
- (long long)index;
- (id)initWithFrame:;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (id)dataModel;
- (void)setDataModel:;
- (id)moreInfoButton;
- (void)setMoreInfoButton:;
@end
