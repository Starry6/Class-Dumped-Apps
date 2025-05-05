@interface BKSHIDEventDeferringRule : NSObject
@property (nonatomic) BKSHIDEventDeferringPredicate predicate;
@property (nonatomic) BKSHIDEventDeferringTarget target;
@property (nonatomic) NSString reason;
- (id)init;
- (id)_initWithPredicate:target:reason:;
- (id)reason;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)predicate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)target;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)ruleForDeferringEventsMatchingPredicate:toTarget:withReason:;
@end
