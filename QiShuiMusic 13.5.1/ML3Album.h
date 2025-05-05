@interface ML3Album : ML3Collection
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
+ (BOOL)libraryContentsChangeForProperty:;
+ (BOOL)assistantLibraryContentsChangeForProperty:;
+ (id)predisambiguatedProperties;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (id)protocolItemWithProperties:inLibrary:;
+ (id)_albumArtistProtocolItemWithTrackProperties:inLibrary:;
@end
