@interface EspressoDCNEspressoOverfeatDetector : NSObject
@property (nonatomic) EspressoFDOverfeatNetwork enet;
@property (nonatomic) double confidenceThreshold;
@property (nonatomic) double minBoundingBoxThreshold;
- (id)init;
- (void)dealloc;
- (id)initWithOptions:;
- (id)getDescription;
- (void)commonInit;
- (void).cxx_destruct;
- (id)initWithNetwork:;
- (void)fillFaceList;
- (id)getFacesFromNetworkResultOriginalWidth:originalHeight:;
- (void)computeBBoxUsingProb:box:andScalefactor:padX:padY:;
- (void)mergeFaceList;
- (double)compareObject:withObject:error:;
- (id)enet;
- (void)setEnet:;
- (double)confidenceThreshold;
- (void)setConfidenceThreshold:;
- (double)minBoundingBoxThreshold;
- (void)setMinBoundingBoxThreshold:;
@end
