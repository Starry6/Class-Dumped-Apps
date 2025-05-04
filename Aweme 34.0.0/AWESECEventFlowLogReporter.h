@interface AWESECEventFlowLogReporter : NSObject
@property (nonatomic) NSMutableArray buffer;
@property (nonatomic) SECFileHandler currentFileHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)logEventDesc:;
- (void)logUploadTrigger:safetyType:;
- (void)createCurrentFileHandler;
- (void)uploadLastLogFromFile;
- (void)uploadWithLogArray:status:triggerType:isEnd:;
- (void)clearBufferToStorage;
- (void)_logUploadTrigger:safetyType:;
- (unsigned long long)_hitStrategy:params:;
- (unsigned long long)_hitMonitorStrategy:hitScene:;
- (void)uploadIncrementLogsFromCurrentStorageWithTriggerType:;
- (BOOL)_hitSceneToMonitorStrategy:hitScene:;
- (void)writeLogsToCurrentFile:;
- (id)currentFileHandler;
- (void)_uploadIncrementLogsFromCurrentFileWithTriggerType:;
- (void)setCurrentFileHandler:;
- (id)buffer;
- (void)clearCache;
- (void)setBuffer:;
- (id)init;
- (void).cxx_destruct;
+ (id)shared;
@end
