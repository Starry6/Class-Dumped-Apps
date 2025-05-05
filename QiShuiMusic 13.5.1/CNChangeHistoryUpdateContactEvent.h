@interface CNChangeHistoryUpdateContactEvent : CNChangeHistoryEvent
@property (nonatomic) BOOL imagesChanged;
@property (nonatomic) CNContact contact;
- (id)init;
- (id)contact;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)acceptEventVisitor:;
- (long long)comparisonResultWithinSameClass:;
- (id)initWithContact:imagesChanged:;
- (BOOL)imagesChanged;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;
@end
