@interface MLITDBGeniusDatabase : NSObject
@property (nonatomic) ML3MusicLibrary musicLibrary;
- (id)init;
- (BOOL)hasGeniusDataAvailable;
- (BOOL)hasGeniusFeatureEnabled;
- (id)musicLibrary;
- (void)performGeniusDatabaseReadWithBlock:;
- (BOOL)_hasRowsInTable:;
- (unsigned int)_getInt32ValueInTable:column:;
- (unsigned long long)_getInt64ValueInTable:column:where:limit:;
- (BOOL)_copyBlobData:blobAllocType:table:blobColumn:where:;
- (id)_copyBlobDataAndBytesInTable:blobColumn:where:;
- (BOOL)_readBlobIntoData:table:blobColumn:where:;
- (BOOL)_readBlobForRowID:intoData:table:blobColumn:;
- (BOOL)_hasAnySongs;
- (unsigned long long)defaultMinTrackCount;
- (unsigned long long)defaultTrackCount;
- (id)copyGeniusConfigrationDataAndBytes;
- (unsigned int)geniusConfigurationVersion;
- (id)copyGeniusMetadataDataAndBytesForGlobalID:;
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:;
- (BOOL)getGeniusConfigrationDataAndBytesIntoData:;
- (BOOL)getGeniusMetadataDataAndBytesForGlobalID:intoData:;
- (BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:intoData:;
+ (id)sharedGeniusDatabase;
@end
