@interface CMPose : CMLogItem
@property (nonatomic) CMAttitude attitude;
@property (nonatomic) {?=ddd} translation;
@property (nonatomic) double consumedAuxTimestamp;
@property (nonatomic) double receivedAuxTimestamp;
@property (nonatomic) double machAbsTimestamp;
- (void)dealloc;
- (id)initWithCoder:;
- (id)attitude;
- (void)encodeWithCoder:;
- (id)description;
- (id)translation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPose:timestamp:;
- (BOOL)isEqualToPose:;
- (double)consumedAuxTimestamp;
- (double)receivedAuxTimestamp;
- (double)machAbsTimestamp;
+ (BOOL)supportsSecureCoding;
@end
