@interface AWEFeedDoubleColumnPreferenceCacheManager : NSObject
@property (nonatomic) NSMutableDictionary prefetchCacheDict;
- (void)resumeRecordShowTimeWithReferString:;
- (void)pauseRecordShowTimeWithReferString:;
- (id)getUninterestedAwemesInfoArrayWithReferString:;
- (void)setPrefetchCacheDict:;
- (id)prefetchCacheDict;
- (id)modelWithReferString:;
- (void)recordShowTime:withReferString:;
- (void)startRecordShowTime:withReferString:;
- (void)endRecordShowTime:withReferString:;
- (void)addAwemeToInterestedAwemes:withReferString:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
