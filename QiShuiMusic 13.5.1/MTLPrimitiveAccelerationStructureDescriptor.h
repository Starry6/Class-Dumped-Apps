@interface MTLPrimitiveAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor
@property (nonatomic) NSArray geometryDescriptors;
@property (nonatomic) I motionStartBorderMode;
@property (nonatomic) I motionEndBorderMode;
@property (nonatomic) float motionStartTime;
@property (nonatomic) float motionEndTime;
@property (nonatomic) Q motionKeyframeCount;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)geometryDescriptors;
- (void)setGeometryDescriptors:;
- (unsigned int)motionStartBorderMode;
- (void)setMotionStartBorderMode:;
- (unsigned int)motionEndBorderMode;
- (void)setMotionEndBorderMode:;
- (float)motionStartTime;
- (void)setMotionStartTime:;
- (float)motionEndTime;
- (void)setMotionEndTime:;
- (unsigned long long)motionKeyframeCount;
- (void)setMotionKeyframeCount:;
+ (id)descriptor;
@end
