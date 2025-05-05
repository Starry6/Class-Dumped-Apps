@interface FigPhotoTiledLayer : CALayer
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) q imageOrientation;
- (void)sizeToFit;
- (void)flushCache;
- (void)dealloc;
- (id)imageSize;
- (long long)imageOrientation;
- (id)initWithContainerData:containerImageIndex:backgroundImageSize:screenSize:;
- (id)initWithContainerURL:containerImageIndex:backgroundImageSize:screenSize:;
- (id)initWithContainerData:containerImageIndex:placeholderImage:screenSize:;
- (void)setVisibleRectangle:zoomScale:;
@end
