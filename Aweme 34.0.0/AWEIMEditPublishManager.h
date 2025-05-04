@interface AWEIMEditPublishManager : NSObject
@property (nonatomic) NSMutableDictionary resultMap;
@property (nonatomic) NSMutableDictionary handlerMap;
- (void)setResultMap:;
- (void)setHandlerMap:;
- (id)handlerMap;
- (id)resultMap;
- (void)addResult:taskID:;
- (void)removeResultWithRaskID:;
- (void)requestPublishResultWithContext:completed:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
