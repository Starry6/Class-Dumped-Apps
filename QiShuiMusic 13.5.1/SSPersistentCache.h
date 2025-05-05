@interface SSPersistentCache : NSObject
- (id)dataForKey:;
- (id)_pathForKey:;
- (void)dealloc;
- (BOOL)setData:forKey:;
- (void)setFilenameSafeKeys:;
- (BOOL)clear;
- (id)initWithIdentifier:cacheName:;
- (BOOL)removeDataForKey:;
- (id)description;
- (BOOL)_isFileNotFound:;
+ (id)safeKeyForKey:;
@end
