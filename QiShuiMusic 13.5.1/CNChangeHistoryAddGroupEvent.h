@interface CNChangeHistoryAddGroupEvent : CNChangeHistoryEvent
@property (nonatomic) CNGroup group;
@property (nonatomic) NSString containerIdentifier;
- (id)init;
- (id)containerIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)group;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)acceptEventVisitor:;
- (long long)comparisonResultWithinSameClass:;
- (id)initWithGroup:containerIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;
@end
