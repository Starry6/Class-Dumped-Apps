@interface VNDetectFaceGazeRequest : VNImageBasedRequest
@property (nonatomic) NSArray results;
@property (nonatomic) float gazeHeatMapThreshold;
@property (nonatomic) float minimumFaceDimension;
@property (nonatomic) float commonGazeLocationRadius;
@property (nonatomic) NSArray inputFaceObservations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)internalPerformRevision:inContext:error:;
- (void)applyConfigurationOfRequest:;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (long long)dependencyProcessingOrdinality;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)applicableDetectorTypeForRevision:error:;
- (float)gazeHeatMapThreshold;
- (void)setGazeHeatMapThreshold:;
- (float)minimumFaceDimension;
- (void)setMinimumFaceDimension:;
- (float)commonGazeLocationRadius;
- (void)setCommonGazeLocationRadius:;
+ (Class)configurationClass;
+ (id)dependentRequestMappingTable;
+ (id)revisionAvailability;
@end
