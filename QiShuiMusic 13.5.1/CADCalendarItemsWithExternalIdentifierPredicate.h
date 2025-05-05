@interface CADCalendarItemsWithExternalIdentifierPredicate : CADEventPredicate
@property (nonatomic) NSString externalIdentifier;
@property (nonatomic) NSInteger entityType;
- (BOOL)ekPredicateEvaluateWithObject:;
- (id)externalIdentifier;
- (id)predicateFormat;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (int)entityType;
- (id)copyWithZone:;
- (id)initWithExternalIdentifier:;
- (id)initWithExternalIdentifier:entityType:;
- (id)copyMatchingItemsWithDatabase:;
+ (BOOL)supportsSecureCoding;
@end
