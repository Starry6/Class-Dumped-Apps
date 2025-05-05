@interface CNChangeHistoryDifferentMeCardEvent : CNChangeHistoryEvent
@property (nonatomic) NSString contactIdentifier;
- (id)init;
- (id)contactIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithContactIdentifier:;
- (void)acceptEventVisitor:;
- (long long)comparisonResultWithinSameClass:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;
@end
