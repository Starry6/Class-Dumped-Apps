@interface CRNeuralTextDetectorV2 : CRNeuralTextDetector
@property (nonatomic) CRTextDetectorModel model;
- (id)model;
- (id)init;
- (void)setModel:;
- (id)initWithConfiguration:error:;
- (void).cxx_destruct;
- (id)smallestImageSizeForTextWithRelativeHeight:originalImageSize:;
- (id)detectInImage:error:;
- (id)processScoreMap:geoMap:adjustedSize:scoreMapFullTile:geoMapFullTile:adjustedFullTileSize:targetSize:targetSizeFullTile:intermediateResults:tileRects:;
+ (void)calculateTargetOutputSize:adjustedInputScale:paddedSize:imageSize:maximumSize:;
+ (id)createGeometricMaps:;
+ (void)aggregateScoreAndGeoMap:inputGeo:targetSize:outputScoreMap:outputGeoMap:outputOrigin:;
+ (void)getMasksForScoreMap:imageMask:binaryMask:;
+ (id)createImageMap:targetSize:;
+ (void)scaleBufferNearestNeighbor:geoMap:dest:destGeomap:binaryMask:;
+ (void)genPolyResultsForMIVSNMS:geoMap:output:mergingType:;
@end
