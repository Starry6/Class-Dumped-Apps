@interface CNChangeHistoryDeleteGroupEvent : CNChangeHistoryEvent
@property (nonatomic) NSString externalURI;
@property (nonatomic) NSString externalModificationTag;
@property (nonatomic) NSString groupIdentifier;
- (id)init;
- (id)groupIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)externalModificationTag;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)externalURI;
- (void)acceptEventVisitor:;
- (long long)comparisonResultWithinSameClass:;
- (id)initWithGroupIdentifier:;
- (id)initWithGroupIdentifier:externalURI:externalModificationTag:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;
@end
