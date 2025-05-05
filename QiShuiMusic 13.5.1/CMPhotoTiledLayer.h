@interface CMPhotoTiledLayer : CALayer
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
- (double)_zoomStartScaleForImage:placeholderImageSize:;
- (void)_setupConverterForSourceColorSpace:destinationColorSpace:;
- (void)_prepareForDecode;
- (id)initWithContainer:containerImageIndex:backgroundImageSize:screenSize:;
- (void)_updateSubLayers:zoomScale:;
- (void)_runMetalConversionOnSurface:cropRect:completionHandler:;
- (void)_runVImageConversionOnSurface:cropRect:completionHandler:;
- (void)_decodeImageRectangle:forLevel:zoomScale:requestId:completionHandler:;
- (void)_removeAllTiles;
- (BOOL)_visibleTileRegionHasChanged:level:;
- (void)setVisibleRectangle:zoomScale:completionHandler:;
@end
