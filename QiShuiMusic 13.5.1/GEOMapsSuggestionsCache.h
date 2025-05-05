@interface GEOMapsSuggestionsCache : NSObject
+ (id)defaultCacheDir;
+ (id)defaultPathForProcessName:;
+ (id)defaultSuppressedEntriesPath;
+ (void)pruneOldCacheAtPath:;
@end
