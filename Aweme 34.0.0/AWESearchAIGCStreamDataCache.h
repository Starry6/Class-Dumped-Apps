@interface AWESearchAIGCStreamDataCache : NSObject
@property (nonatomic) NSMutableDictionary dataCache;
- (id)dataListForKey:;
- (id)dataCache;
- (void).cxx_destruct;
- (void)setDataCache:;
+ (id)sharedInstance;
@end
