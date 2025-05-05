@interface BDUGLocationImplCache : NSObject
+ (void)saveCachedInfo:;
+ (id)cachedModelWithCacheTime:intelUploadInterval:desiredAccuracy:;
+ (void)removeCachedInfo;
+ (id)cachedModel;
@end
