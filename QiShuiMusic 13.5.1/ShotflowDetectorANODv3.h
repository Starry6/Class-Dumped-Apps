@interface ShotflowDetectorANODv3 : ShotflowDetectorANODBase
@property (nonatomic) float faceDetectionPrecisionRecallThreshold;
- (void)setFaceDetectionPrecisionRecallThreshold:;
- (id)nmsBoxes:;
- (id)initWithNetwork:filterThresholds:;
- (id)getIndexBoxes:filterThresholdIndex:;
- (id)initWithNetwork:;
- (id)processBoxes:withHeight:andWidth:;
- (float)faceDetectionPrecisionRecallThreshold;
+ (id)filterThresholds;
+ (Class)shotflowNetworkClass;
+ (id)supportedLabelKeys;
+ (float)defaultFaceDetectionPrecisionRecallThreshold;
@end
