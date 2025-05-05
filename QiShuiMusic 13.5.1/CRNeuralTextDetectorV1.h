@interface CRNeuralTextDetectorV1 : CRNeuralTextDetector
@property (nonatomic) CRTextDetectorModel model;
- (id)model;
- (id)init;
- (void)setModel:;
- (id)initWithConfiguration:error:;
- (void).cxx_destruct;
- (id)smallestImageSizeForTextWithRelativeHeight:originalImageSize:;
- (id)detectInImage:error:;
- (id)processScoreMap:geoMap:targetSize:scale:;
+ (void)calculateTargetOutputSize:adjustedInputScale:paddedSize:imageSize:maximumSize:;
+ (void)aggregateScoreAndGeoMap:inputGeo:targetSize:outputScoreMap:outputGeoMap:outputOrigin:;
+ (void)getMasksForScoreMap:imageMask:binaryMask:;
+ (void)scaleBufferNearestNeighbor:geoMap:dest:destGeomap:binaryMask:;
+ (id)allocGeometricMaps:;
+ (void)deallocGeometricMaps:;
+ (id)extractImageMap:targetSize:;
+ (id)genPolyResults:geoMap:scale:mergingType:;
@end
