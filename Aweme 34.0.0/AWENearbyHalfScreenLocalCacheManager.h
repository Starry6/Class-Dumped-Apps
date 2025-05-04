@interface AWENearbyHalfScreenLocalCacheManager : NSObject
@property (nonatomic) NSString locationCache;
- (id)getHalfScreenLocationCacheWithType:pageType:halfScreenModel:offsetY:;
- (id)getFMP3GroupPropsConfigWithViewID:;
- (void)cacheHalfScreenLocationWithParams:rowType:pageType:offsetY:rect:;
- (id)getCacheToken;
- (id)getGroupLocationWithID:cacheKey:halfScreenID:;
- (void)checkCacheVaild:resultBlk:;
- (id)getWhiteListGroupID:;
- (void).cxx_destruct;
- (id)locationCache;
- (void)setLocationCache:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (void)trackNearbyHalfScreenCacheMonitorWitModel:extraParam:;
+ (id)getViewIDFromGroup:;
+ (BOOL)isGroupContainViewID:targetGroupID:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
