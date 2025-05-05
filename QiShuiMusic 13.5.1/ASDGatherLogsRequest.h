@interface ASDGatherLogsRequest : NSObject
- (id)initWithOptions:;
- (void).cxx_destruct;
- (void)createLogFileArchiveWithCompletionBlock:;
- (void)createHARFileArchiveWithCompletionBlock:;
- (void)gatherLogsWithCompletionBlock:;
+ (void)clearHARFiles;
@end
