@interface AWEHotSpotFeedNewDetailCache : NSObject
@property (nonatomic) NSMutableDictionary responseDictCache;
- (void)removeAllCache;
- (id)responseDictCache;
- (void)cacheDetailInfo:forHotSpotID:;
- (id)responseForHotSpotID:;
- (void)setResponseDictCache:;
- (id)init;
- (void).cxx_destruct;
@end
