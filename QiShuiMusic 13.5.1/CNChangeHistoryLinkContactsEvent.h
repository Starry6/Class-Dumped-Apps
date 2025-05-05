@interface CNChangeHistoryLinkContactsEvent : CNChangeHistoryEvent
@property (nonatomic) CNContact fromContact;
@property (nonatomic) CNContact toContact;
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
- (id)initWithFromContact:toContact:unifiedContact:;
- (id)fromContact;
- (id)toContact;
- (id)unifiedContact;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;
@end
