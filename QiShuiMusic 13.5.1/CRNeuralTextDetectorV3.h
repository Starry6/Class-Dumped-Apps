@interface CRNeuralTextDetectorV3 : CRNeuralTextDetector
@property (nonatomic) CRTextDetectorModelV3 model;
- (id)model;
- (id)init;
- (void)setModel:;
- (id)initWithConfiguration:error:;
- (void).cxx_destruct;
- (BOOL)preheatWithError:;
- (id)smallestImageSizeForTextWithRelativeHeight:originalImageSize:;
- (id)detectInImage:error:;
- (id)enumerateTilesForImage:guidedByScoreMapFullTile:block:;
- (id)processRegionMap:affinityMap:linkMap:adjustedSize:regionMapFullTile:affinityMapFullTile:linkMapFullTile:adjustedFullTileSize:targetSize:targetSizeFullTile:intermediateResults:withScaleIds:sourceImageSize:tileRects:;
+ (id)createImageMap:targetSize:;
+ (id)scaledImageSizeForMaxSize:minSize:inputLengthLimit:imageSize:scale:;
+ (id)scaledImageSizeForConfiguration:imageSize:;
+ (void)calculateTargetOutputSize:adjustedInputScale:paddedSize:imageSize:maximumSize:minimumSize:inputLengthLimit:;
+ (void)aggregateRegionMap:affinityMap:scriptMap:linkMap:targetSize:outputRegionMap:outputAffinityMap:outputScriptMap:outputLinkMap:outputOrigin:;
@end
