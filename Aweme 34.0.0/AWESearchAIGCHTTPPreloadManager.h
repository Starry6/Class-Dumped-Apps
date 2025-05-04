@interface AWESearchAIGCHTTPPreloadManager : NSObject
@property (nonatomic) NSMutableDictionary cacheMap;
- (id)addTaskWithRequest:;
- (void)removeTaskWithRequest:;
- (id)cacheMap;
- (void)setCacheMap:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
