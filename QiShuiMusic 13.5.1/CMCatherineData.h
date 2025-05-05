@interface CMCatherineData : CMLogItem
@property (nonatomic) double catherine;
@property (nonatomic) double confidence;
- (double)confidence;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithCatherine:confidence:timestamp:;
- (double)catherine;
+ (BOOL)supportsSecureCoding;
@end
