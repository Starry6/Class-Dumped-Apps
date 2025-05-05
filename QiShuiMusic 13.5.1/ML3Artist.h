@interface ML3Artist : ML3Collection
- (id)multiverseIdentifier;
- (void)updateTrackValues:;
- (id)protocolItem;
+ (id)propertyForMPMediaEntityProperty:;
+ (id)databaseTable;
+ (id)allProperties;
+ (id)defaultOrderingTerms;
+ (id)trackForeignPersistentID;
+ (long long)revisionTrackingCode;
+ (id)foreignPropertyForProperty:entityClass:;
+ (BOOL)propertyIsCountProperty:;
+ (id)countingQueryForBaseQuery:countProperty:forIdentifier:;
+ (id)predisambiguatedProperties;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (id)protocolItemWithProperties:inLibrary:;
@end
