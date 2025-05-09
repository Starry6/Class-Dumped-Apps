@interface EKSuggestedEventInfo : EKObject
@property (nonatomic) NSString opaqueKey;
@property (nonatomic) NSString uniqueKey;
@property (nonatomic) NSString extractionGroupIdentifier;
@property (nonatomic) BOOL changesAcknowledged;
@property (nonatomic) Q changedFields;
@property (nonatomic) double timestamp;
- (id)uniqueKey;
- (void)setTimestamp:;
- (double)timestamp;
- (id)description;
- (id)copyWithZone:;
- (id)semanticIdentifier;
- (unsigned long long)changedFields;
- (id)initWithEventStore:opaqueKey:uniqueKey:extractionGroupIdentifier:;
- (id)opaqueKey;
- (id)initWithOpaqueKey:uniqueKey:;
- (id)initWithOpaqueKey:uniqueKey:extractionGroupIdentifier:;
- (id)initWithEventStore:opaqueKey:uniqueKey:;
- (id)relatedEvent;
- (void)setOpaqueKey:;
- (void)setUniqueKey:;
- (id)extractionGroupIdentifier;
- (void)setExtractionGroupIdentifier:;
- (void)setChangedFields:;
- (BOOL)changesAcknowledged;
- (void)setChangesAcknowledged:;
- (void)setTimestampAsDate:;
- (id)timestampAsDate;
+ (id)knownSingleValueKeysForComparison;
+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;
@end
