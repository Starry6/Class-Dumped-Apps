@interface CKFrameworkFingerprint : NSObject
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSNumber version;
@property (nonatomic) NSNumber cpuType;
@property (nonatomic) NSNumber cpuSubtype;
- (void)setCpuSubtype:;
- (id)init;
- (void)setVersion:;
- (id)uuid;
- (id)version;
- (void)setUuid:;
- (id)initWithCoder:;
- (id)cpuType;
- (void)encodeWithCoder:;
- (void)setCpuType:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isLikelyEqual:;
- (id)cpuSubtype;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
