@interface CNChangeHistoryAddMemberToGroupEvent : CNChangeHistoryEvent
@property (nonatomic) CNContact member;
@property (nonatomic) CNGroup group;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)group;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)member;
- (void)acceptEventVisitor:;
- (long long)comparisonResultWithinSameClass:;
- (id)initWithMember:group:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;
@end
