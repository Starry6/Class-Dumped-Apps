@interface CMGyroData : CMLogItem
@property (nonatomic) {?=ddd} rotationRate;
- (void)dealloc;
- (id)rotationRate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithRotationRate:andTimestamp:;
+ (BOOL)supportsSecureCoding;
@end
