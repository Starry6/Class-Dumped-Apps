@interface AWELiveAcqCastVideoSearchSugManager : NSObject
@property (nonatomic) NSString query;
@property (nonatomic) NSDictionary logPassback;
@property (nonatomic) NSArray sugList;
@property (nonatomic) <AWEHttpTask> task;
- (id)logPassback;
- (void)setLogPassback:;
- (id)sugList;
- (void)setSugList:;
- (id)getFinalGetUrl:withParams:;
- (void)fetchSearchSugWithQuery:textFieldParams:completion:;
- (void)setTask:;
- (void)setQuery:;
- (id)query;
- (id)task;
- (void).cxx_destruct;
- (void)reset;
@end
