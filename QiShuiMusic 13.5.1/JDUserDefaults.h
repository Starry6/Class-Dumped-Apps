@interface JDUserDefaults : NSObject
@property (nonatomic) float reflectivityFilterThreshold;
@property (nonatomic) BOOL replayFirstFrame;
@property (nonatomic) NSInteger hybridOverride;
@property (nonatomic) I gmoFlowBits;
@property (nonatomic) BOOL ignoreWarperMesh;
@property (nonatomic) NSString dumpWarperMeshesPath;
@property (nonatomic) NSString dumpRawFramesPath;
@property (nonatomic) NSString dumpPointCloudsPath;
@property (nonatomic) NSString dumpFrameConfigsPath;
- (id)init;
- (void).cxx_destruct;
- (id)getObjectForKey:from:withDefaultValue:;
- (float)reflectivityFilterThreshold;
- (BOOL)replayFirstFrame;
- (int)hybridOverride;
- (unsigned int)gmoFlowBits;
- (BOOL)ignoreWarperMesh;
- (id)dumpWarperMeshesPath;
- (id)dumpRawFramesPath;
- (id)dumpPointCloudsPath;
- (id)dumpFrameConfigsPath;
+ (id)defaults;
@end
