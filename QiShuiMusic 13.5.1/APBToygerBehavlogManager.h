@interface APBToygerBehavlogManager : NSObject
@property (nonatomic) NSDictionary config;
@property (nonatomic) BisBehavLog behavLog;
- (id)buildClientInfo;
- (id)behavLog;
- (id)buildCommon;
- (id)buildToken;
- (void)clearTask;
- (id)generateLogWithInvokeType:withRetry:;
- (void)setBehavLog:;
- (void)addTask:;
- (void)setConfig:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)currentTime;
- (id)config;
@end
