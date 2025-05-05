@interface SNResultsCollector : NSObject
@property (nonatomic) NSArray results;
@property (nonatomic) NSArray errors;
@property (nonatomic) q completeCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)clearErrors;
- (void)clearResults;
- (id)results;
- (void)request:didFailWithError:;
- (void).cxx_destruct;
- (id)errors;
- (void)request:didProduceResult:;
- (void)requestDidComplete:;
- (void)clearCompleteCount;
- (long long)completeCount;
+ (BOOL)automaticallyNotifiesObserversForKey:;
@end
