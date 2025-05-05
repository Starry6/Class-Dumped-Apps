@interface CTSimHardwareInfo : NSObject
@property (nonatomic) q hardwareType;
@property (nonatomic) q simLocation;
- (id)initWithCoder:;
- (long long)hardwareType;
- (void)encodeWithCoder:;
- (id)description;
- (void)setHardwareType:;
- (id)initWithHardwareInfo:simLocation:;
- (long long)simLocation;
- (void)setSimLocation:;
+ (BOOL)supportsSecureCoding;
@end
