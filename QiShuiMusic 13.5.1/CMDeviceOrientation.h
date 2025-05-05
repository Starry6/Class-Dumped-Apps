@interface CMDeviceOrientation : CMLogItem
@property (nonatomic) NSInteger orientation;
- (void)dealloc;
- (int)orientation;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)initWithOrientation:andTimestamp:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
