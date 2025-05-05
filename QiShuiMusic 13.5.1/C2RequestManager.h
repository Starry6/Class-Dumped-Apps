@interface C2RequestManager : NSObject
@property (nonatomic) C2SessionPool sessionPool;
- (id)init;
- (id)testUtility_sessionTaskForTask:;
- (id)sessionPool;
- (id)createDataTaskWithRequest:options:delegate:sessionHandle:;
- (void).cxx_destruct;
- (id)createDataTaskWithRequest:options:delegate:;
- (id)testUtility_sessionForTask:;
- (void)_testUtility_forTask:sessionHandle:taskHandle:;
+ (id)sharedManager;
@end
