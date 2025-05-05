@interface IMDaemonQueryController : NSObject
@property (nonatomic) NSMutableDictionary queries;
@property (nonatomic) IMDaemonController daemonController;
- (void)failQuery:error:;
- (void)completeQuery:userInfo:;
- (void)_validateOutstandingQueries;
- (void)_completeQuery:success:error:userInfo:;
- (void)_daemonDisconnected:;
- (id)daemonController;
- (void)performQueryWithKey:expectsSynchronousResult:block:;
- (id)queries;
- (id)initWithDaemonController:;
- (void).cxx_destruct;
- (void)performQueryWithKey:expectsSynchronousResult:block:completionHandler:;
- (void)completeQuery:;
@end
