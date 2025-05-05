@interface CMSuppressionEvent : CMLogItem
@property (nonatomic) q type;
@property (nonatomic) Q reason;
- (void)dealloc;
- (unsigned long long)reason;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (id)description;
- (id)copyWithZone:;
- (id)initWithEventType:reason:timestamp:;
+ (BOOL)supportsSecureCoding;
+ (id)stringForEventType:;
+ (id)stringForEventReason:;
@end
