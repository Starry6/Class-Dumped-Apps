@interface CNChangeHistoryRemoveSubgroupFromGroupEvent : CNChangeHistoryEvent
@property (nonatomic) CNGroup subgroup;
@property (nonatomic) CNGroup group;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)group;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)acceptEventVisitor:;
- (long long)comparisonResultWithinSameClass:;
- (id)initWithSubgroup:group:;
- (id)subgroup;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;
@end
