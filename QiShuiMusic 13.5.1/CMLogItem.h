@interface CMLogItem : NSObject
@property (nonatomic) double timestamp;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (double)timestamp;
- (id)initWithTimestamp:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
