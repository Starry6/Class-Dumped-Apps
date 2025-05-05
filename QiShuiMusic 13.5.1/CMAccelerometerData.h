@interface CMAccelerometerData : CMLogItem
@property (nonatomic) {?=ddd} acceleration;
- (void)dealloc;
- (id)acceleration;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithAcceleration:andTimestamp:;
+ (BOOL)supportsSecureCoding;
@end
