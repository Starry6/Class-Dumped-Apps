@interface ARObjectScanningConfiguration : ARConfiguration
@property (nonatomic) BOOL mlModelEnabled;
@property (nonatomic) BOOL lowQosSchedulingEnabled;
@property (nonatomic) BOOL deliverRawSceneUnderstandingResults;
@property (nonatomic) BOOL autoFocusEnabled;
@property (nonatomic) Q planeDetection;
- (id)init;
- (BOOL)isMLModelEnabled;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setPlaneDetection:;
- (void)createTechniques:;
- (id)imageSensorSettings;
- (void)setLowQosSchedulingEnabled:;
- (unsigned long long)planeDetection;
- (void)setMlModelEnabled:;
- (BOOL)isLowQosSchedulingEnabled;
- (BOOL)deliverRawSceneUnderstandingResults;
- (void)setDeliverRawSceneUnderstandingResults:;
+ (id)new;
+ (BOOL)isSupported;
+ (id)supportedVideoFormats;
+ (BOOL)supportsFrameSemantics:;
@end
