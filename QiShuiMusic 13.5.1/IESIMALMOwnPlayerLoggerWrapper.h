@interface IESIMALMOwnPlayerLoggerWrapper : NSObject
@property (nonatomic) @? applogBlock;
@property (nonatomic) @? newApplogBlock;
- (void)setApplogBlock:;
- (id)applogBlock;
- (void)logPreloaderData:;
- (id)newApplogBlock;
- (void)setApplogCallBlock:;
- (void)setAutoTraceReportOpen:;
- (void)setNewApplogBlock:;
- (void)setNewApplogCallBlock:;
- (void)setUseNewApplog:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedLogger;
@end
