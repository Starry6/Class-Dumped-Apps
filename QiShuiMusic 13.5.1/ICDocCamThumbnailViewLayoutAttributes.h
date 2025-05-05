@interface ICDocCamThumbnailViewLayoutAttributes : UICollectionViewLayoutAttributes
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) BOOL renderShadow;
@property (nonatomic) BOOL renderBorder;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (double)imageWidth;
- (double)imageHeight;
- (void)setImageHeight:;
- (void)setImageWidth:;
- (BOOL)renderShadow;
- (void)setRenderShadow:;
- (BOOL)renderBorder;
- (void)setRenderBorder:;
@end
