@interface CNChangeHistoryPreferredContactForImageEvent : CNChangeHistoryEvent
@property (nonatomic) CNContact preferredContact;
@property (nonatomic) CNContact unifiedContact;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)acceptEventVisitor:;
- (long long)comparisonResultWithinSameClass:;
- (id)unifiedContact;
- (id)initWithPreferredContact:unifiedContact:;
- (id)preferredContact;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;
@end
