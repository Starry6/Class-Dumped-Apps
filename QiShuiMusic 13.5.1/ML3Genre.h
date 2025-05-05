@interface ML3Genre : ML3Collection
- (id)multiverseIdentifier;
- (void)updateTrackValues:;
- (id)protocolItem;
+ (id)propertyForMPMediaEntityProperty:;
+ (id)databaseTable;
+ (id)allProperties;
+ (id)joinClausesForProperty:;
+ (id)defaultOrderingTerms;
+ (id)trackForeignPersistentID;
+ (long long)revisionTrackingCode;
+ (id)foreignPropertyForProperty:entityClass:;
+ (BOOL)propertyIsCountProperty:;
+ (id)countingQueryForBaseQuery:countProperty:forIdentifier:;
+ (id)predisambiguatedProperties;
+ (id)propertiesForGroupingKey;
+ (id)protocolItemWithProperties:inLibrary:;
@end
