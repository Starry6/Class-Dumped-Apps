@interface CNChangeHistoryAddContactEvent : CNChangeHistoryEvent
@property (nonatomic) CNContact contact;
@property (nonatomic) NSString containerIdentifier;
- (id)init;
- (id)containerIdentifier;
- (id)contact;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)acceptEventVisitor:;
- (long long)comparisonResultWithinSameClass:;
- (id)initWithContact:containerIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;
@end
