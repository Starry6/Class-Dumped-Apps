@interface CIBurstThumbnailCluster : NSObject
@property (nonatomic) NSMutableArray burstImages;
@property (nonatomic) NSMutableDictionary imageProps;
@property (nonatomic) CIBurstYUVImage image;
@property (nonatomic) ^{__IOSurface=} fullsizeJpegData;
@property (nonatomic) @? completionBlock;
- (id)init;
- (void)dealloc;
- (void)setCompletionBlock:;
- (void)setImage:;
- (id)completionBlock;
- (id)image;
- (id)fullsizeJpegData;
- (void)setFullsizeJpegData:;
- (id)initWithImageData:dict:identifier:imageProps:completionBlock:;
- (void)releaseImage;
- (void)addItemsFromCluster:;
- (float)computeMergeCost:::;
- (id)burstImages;
- (void)setBurstImages:;
- (id)imageProps;
- (void)setImageProps:;
@end
