@interface UIInterpolatingMotionEffect : UIMotionEffect
@property (nonatomic) NSString keyPath;
@property (nonatomic) q type;
@property (nonatomic) @ minimumRelativeValue;
@property (nonatomic) @ maximumRelativeValue;
- (void)_setType:;
- (id)init;
- (void)_setHorizontalAccelerationBoostFactor:;
- (id)keyPathsAndRelativeValuesForViewerOffset:;
- (void)setMaximumRelativeValue:;
- (void)_setKeyPath:;
- (id)initWithCoder:;
- (void)setMinimumRelativeValue:;
- (double)_horizontalAccelerationBoostFactor;
- (id)maximumRelativeValue;
- (void)_setVerticalAccelerationBoostFactor:;
- (void)encodeWithCoder:;
- (long long)type;
- (id)keyPath;
- (void).cxx_destruct;
- (double)_verticalAccelerationBoostFactor;
- (id)description;
- (id)_keyPathsAndRelativeValuesForPose:;
- (id)initWithKeyPath:type:;
- (id)minimumRelativeValue;
- (id)copyWithZone:;
@end
