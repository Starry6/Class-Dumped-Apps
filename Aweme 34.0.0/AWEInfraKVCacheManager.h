@interface AWEInfraKVCacheManager : NSObject
- (void)trimMMKVInBasePath;
- (void)cleanLegacyResource;
- (double)cleanSize;
+ (id)sharedManager;
@end
