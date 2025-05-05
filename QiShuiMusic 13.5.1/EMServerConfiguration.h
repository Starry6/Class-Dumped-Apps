@interface EMServerConfiguration : NSObject
+ (BOOL)refresh;
+ (id)getValueForKey:;
+ (id)_userDefaultsKey;
+ (id)_configurationLocation;
+ (double)_cacheValidityInterval;
+ (void)_assertNotMainThread;
+ (BOOL)isCacheRecent;
+ (void)refreshAsync;
+ (void)_savePropertyList:;
@end
