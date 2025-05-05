@interface UIMotionEffectGroup : UIMotionEffect
@property (nonatomic) NSArray motionEffects;
- (id)keyPathsAndRelativeValuesForViewerOffset:;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)_keyPathsAndRelativeValuesForPose:;
- (id)copyWithZone:;
- (id)motionEffects;
- (void)setMotionEffects:;
@end
