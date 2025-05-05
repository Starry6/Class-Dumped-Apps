@interface CNChangeHistoryDeleteContactEvent : CNChangeHistoryEvent
@property (nonatomic) NSString externalURI;
@property (nonatomic) NSString externalModificationTag;
@property (nonatomic) NSString contactIdentifier;
- (id)init;
- (id)contactIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)externalModificationTag;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithContactIdentifier:;
- (id)externalURI;
- (void)acceptEventVisitor:;
- (long long)comparisonResultWithinSameClass:;
- (id)initWithContactIdentifier:externalURI:externalModificationTag:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;
@end
