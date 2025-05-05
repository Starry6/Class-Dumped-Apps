@interface ML3AlbumArtist : ML3Collection
- (id)multiverseIdentifier;
- (void)updateTrackValues:;
- (id)protocolItem;
+ (id)propertyForMPMediaEntityProperty:;
+ (id)databaseTable;
+ (id)allProperties;
+ (id)defaultOrderingTerms;
+ (id)trackForeignPersistentID;
+ (long long)revisionTrackingCode;
+ (id)sectionPropertyForProperty:;
+ (id)foreignPropertyForProperty:entityClass:;
+ (BOOL)propertyIsCountProperty:;
+ (id)countingQueryForBaseQuery:countProperty:forIdentifier:;
+ (BOOL)deleteFromLibrary:deletionType:persistentIDs:count:usingConnection:;
+ (id)predisambiguatedProperties;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (id)protocolItemWithProperties:inLibrary:;
@end
