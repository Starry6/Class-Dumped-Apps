@interface IESLiveUserEnterViewFactory : NSObject
@property (nonatomic) BOOL reduceUserEnterRoomAnimationFPS;
@property (nonatomic) NSObject<OS_dispatch_queue> imageIOQueue;
@property (nonatomic) BOOL isGameRoom;
@property (nonatomic) BOOL shouldShowVideoScenePattern;
- (BOOL)reduceUserEnterRoomAnimationFPS;
- (void)_loadImagesWithURLs:completion:;
- (void)setShouldShowVideoScenePattern:;
- (void)_createViewFrom:frame:completion:;
- (void)_loadImagesWithImageModel:completion:;
- (id)_webPDecoderWithEffectID:;
- (void)createWithNode:frame:completion:;
- (id)imageIOQueue;
- (id)imagesFromPieces:;
- (BOOL)isGameRoom;
- (void)loadVideoLayerResourcesWithNode:completion:;
- (void)setImageIOQueue:;
- (void)setIsGameRoom:;
- (void)setReduceUserEnterRoomAnimationFPS:;
- (BOOL)shouldShowVideoScenePattern;
- (id)init;
- (void).cxx_destruct;
@end
