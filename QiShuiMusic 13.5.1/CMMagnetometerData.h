@interface CMMagnetometerData : CMLogItem
@property (nonatomic) {?=ddd} magneticField;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)magneticField;
- (id)copyWithZone:;
- (id)initWithMagneticField:andTimestamp:;
+ (BOOL)supportsSecureCoding;
@end
