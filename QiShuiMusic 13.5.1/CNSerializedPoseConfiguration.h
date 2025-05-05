@interface CNSerializedPoseConfiguration : NSObject
@property (nonatomic) NSString poseName;
@property (nonatomic) AVTAvatarPhysicalizedPose pose;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)pose;
- (id)initWithPoseName:pose:;
- (id)initWithPoseConfiguration:;
- (id)poseName;
+ (id)log;
+ (BOOL)supportsSecureCoding;
@end
