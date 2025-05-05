@interface CNChangeHistoryUnlinkContactEvent : CNChangeHistoryEvent
@property (nonatomic) CNContact contact;
- (id)init;
- (id)initWithContact:;
- (id)contact;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)acceptEventVisitor:;
- (long long)comparisonResultWithinSameClass:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;
@end
