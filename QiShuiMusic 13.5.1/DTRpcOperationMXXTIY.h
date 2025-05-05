@interface DTRpcOperationMXXTIY : DTRpcBaseOperationMXXTIY
@property (nonatomic) DTRpcMethodMXXTIY method;
@property (nonatomic) NSArray params;
@property (nonatomic) @ resultObject;
@property (nonatomic) NSMutableDictionary userInfo;
@property (nonatomic) double startTime;
- (id)buildRequestDataWithMethod:params:;
- (id)initWithURL:method:params:;
- (id)initWithURL:method:params:headerFields:;
- (id)initWithURL:method:params:timeout:;
- (void)setResultObject:;
- (id)userInfo;
- (id)copy;
- (void)start;
- (void)setStartTime:;
- (id)method;
- (double)startTime;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (void)setMethod:;
- (id)params;
- (id)resultObject;
- (void)didFinish;
- (void)setParams:;
- (void)didStart;
@end
