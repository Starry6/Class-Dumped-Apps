@interface CMMagicMountState : CMLogItem
@property (nonatomic) BOOL mounted;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithMounted:timestamp:;
- (BOOL)isMounted;
+ (BOOL)supportsSecureCoding;
@end
