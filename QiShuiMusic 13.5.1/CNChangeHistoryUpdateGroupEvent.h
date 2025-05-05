@interface CNChangeHistoryUpdateGroupEvent : CNChangeHistoryEvent
@property (nonatomic) CNGroup group;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)group;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithGroup:;
- (void)acceptEventVisitor:;
- (long long)comparisonResultWithinSameClass:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;
@end
