@interface AR3DSkeletonRegistrationData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) float estimatedScaleFactor;
@property (nonatomic) {?=[4]} visionTransform;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setTimestamp:;
- (double)timestamp;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)visionTransform;
- (void)setVisionTransform:;
- (float)estimatedScaleFactor;
- (void)setEstimatedScaleFactor:;
@end
