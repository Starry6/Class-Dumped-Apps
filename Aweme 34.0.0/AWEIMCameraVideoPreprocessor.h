@interface AWEIMCameraVideoPreprocessor : NSObject
@property (nonatomic) AWEIMAlbumAssetPrepareContext normalContext;
@property (nonatomic) NSMutableArray coverHandlerArr;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canAddToOperationQueueWithContext:;
- (id)prepareContextWithUseOrigin:;
- (void)setNormalContext:;
- (id)normalContext;
- (void)cancelAssetPreprocess;
- (void)requestAssetCoverWithUseOrigin:handler:;
- (void)requestAssetWithUseOrigin:handler:;
- (id)coverHandlerArr;
- (void)setCoverHandlerArr:;
- (void)p_genThumbnailDataWithSourceImage:;
- (void)p_genFirstFrameDataWithSourceImage:;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
