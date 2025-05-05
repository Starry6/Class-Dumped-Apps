@interface BWSceneStabilityMonitor : NSObject
@property (nonatomic) BOOL stable;
@property (nonatomic) float stabilityMetric;
@property (nonatomic) {?=qiIq} stableStartTime;
@property (nonatomic) {?=qiIq} unstableStartTime;
@property (nonatomic) BOOL afCompleted;
@property (nonatomic) BOOL processedSceneMotion;
@property (nonatomic) float sceneMotionOffsetX;
@property (nonatomic) float sceneMotionOffsetY;
- (id)init;
- (void)dealloc;
- (float)stabilityMetric;
- (BOOL)isAFCompleted;
- (float)sceneMotionOffsetY;
- (id)unstableStartTime;
- (float)sceneMotionOffsetX;
- (id)stableStartTime;
- (void)calculateStabilityWithPixelBuffer:pts:metadataDictionary:forceSceneMotion:;
- (void)reset;
- (BOOL)processedSceneMotion;
- (BOOL)isStable;
@end
