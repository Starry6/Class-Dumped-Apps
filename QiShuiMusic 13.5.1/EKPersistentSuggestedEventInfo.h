@interface EKPersistentSuggestedEventInfo : EKPersistentObject
@property (nonatomic) EKPersistentEvent owner;
@property (nonatomic) NSString opaqueKey;
@property (nonatomic) NSString uniqueKey;
@property (nonatomic) Q changedFields;
@property (nonatomic) BOOL changesAcknowledged;
@property (nonatomic) NSDate timestamp;
@property (nonatomic) NSString extractionGroupIdentifier;
- (id)uniqueKey;
- (void)setOwner:;
- (id)owner;
- (int)entityType;
- (id)copyWithZone:;
- (id)semanticIdentifier;
- (unsigned long long)changedFields;
- (id)opaqueKey;
- (void)setOpaqueKey:;
- (void)setUniqueKey:;
- (id)extractionGroupIdentifier;
- (void)setExtractionGroupIdentifier:;
- (void)setChangedFields:;
- (BOOL)changesAcknowledged;
- (void)setChangesAcknowledged:;
- (void)setTimestampAsDate:;
- (id)timestampAsDate;
+ (id)relations;
+ (Class)meltedClass;
+ (id)suggestedEventInfoWithOpaqueKey:uniqueKey:;
@end
