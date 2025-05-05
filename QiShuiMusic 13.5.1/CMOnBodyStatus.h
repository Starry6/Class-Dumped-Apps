@interface CMOnBodyStatus : CMLogItem
@property (nonatomic) q result;
@property (nonatomic) q confidence;
- (long long)result;
- (long long)confidence;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithOnBodyResult:confidence:timestamp:;
+ (BOOL)supportsSecureCoding;
@end
