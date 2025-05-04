@interface AWENearbyCommonGeckoAbility : NSObject
+ (void)updateGeckoConfigWithArray:;
+ (unsigned long long)getGeckoIDWithChannel:accessKey:;
+ (id)getSceneStringWithScene:;
+ (BOOL)getGeckoAbiblityEnable;
+ (id)getGeckoConfigArray;
+ (void)createGeckoTaskWithChannels:;
+ (void)trackGeckoForceCDNWithChannel:geckoID:accessKey:isFirstLoad:;
+ (void)trackGeckoUpdateResultWithChannel:result:accessKey:;
+ (void)trackGeckoIDWithScene:;
+ (BOOL)isGeckoIDForbiddenWithChannel:isReuse:;
+ (void)createGeckoTaskWithAllChannels;
@end
