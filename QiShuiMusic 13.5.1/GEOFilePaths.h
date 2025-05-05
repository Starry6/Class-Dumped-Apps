@interface GEOFilePaths : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)captureStatePlistWithHints:;
+ (id)homeDirectory;
+ (id)locationShifterDBFilePath;
+ (id)urlFor:;
+ (id)imageServiceDBFileURL;
+ (id)analyticsPipelineFilePath;
+ (id)preferencesDirectoryPath;
+ (id)_internal_homeDirectory;
+ (id)tileCacheDirectoryPath;
+ (id)analyticsUploadDirectoryPath;
+ (id)pathFor:;
+ (id)mapsSuggestionsCacheDirectoryPath;
+ (id)geoServicesCacheDirectoryPath;
+ (id)dictionaryRepresentation;
+ (id)requestCountsDBFilePath;
+ (id)_internal_geoServicesCacheDirectoryPath;
+ (id)geodCacheDirectoryPath;
@end
