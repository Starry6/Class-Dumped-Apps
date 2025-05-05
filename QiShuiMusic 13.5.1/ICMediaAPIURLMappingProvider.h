@interface ICMediaAPIURLMappingProvider : NSObject
- (id)_cacheFileURL;
- (id)getCurrentURLMappingSet;
- (void)updateURLMappingsWithCompletion:;
- (void)clearCachedURLMappings;
- (void)setCurrentURLMappingSet:;
- (id)_loadCacheDictionary;
- (void)_saveCachedResponsePayload:eTag:;
+ (id)sharedProvider;
@end
