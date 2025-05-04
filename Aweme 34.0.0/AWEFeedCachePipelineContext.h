@interface AWEFeedCachePipelineContext : NSObject
@property (nonatomic) NSMutableDictionary dataMap;
@property (nonatomic) <AWEFeedCacheTracker> tracker;
@property (nonatomic) @ request;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString scene;
- (id)dataMap;
- (void)setDataMap:;
- (id)initWithRequest:tag:;
- (id)findDataForKey:;
- (void)onEvent:withParams:;
- (void)putDataWithKey:Data:;
- (void)setScene:;
- (id)tag;
- (id)scene;
- (id)tracker;
- (void)setTag:;
- (void)setTracker:;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)request;
@end
