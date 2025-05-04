@interface AWEDCFeedPrefetchManager : NSObject
@property (nonatomic) NSMutableDictionary prefetchDataControllerCache;
- (void)prefetchWithReferString:;
- (void)prefetchWithReferString:args:params:;
- (id)getPrefetchDataControllerWithReferString:;
- (void)setPrefetchDataControllerCache:;
- (BOOL)enablePrefetchDoubleColumnData;
- (id)prefetchMap;
- (id)prefetchDataControllerCache;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
