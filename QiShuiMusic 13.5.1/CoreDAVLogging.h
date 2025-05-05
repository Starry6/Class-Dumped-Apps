@interface CoreDAVLogging : NSObject
- (id)init;
- (BOOL)_shouldOutputAtLevel:forAccountInfoProvider:;
- (id)_delegatesToLogForProvider:;
- (id)delegatesToLogTransmittedDataForAccountInfoProvider:;
- (id)logHandleForAccountInfoProvider:;
- (void)addLogDelegate:forAccountInfoProvider:;
- (void)_logOldMessageForAccountInfoProvider:level:format:;
- (void).cxx_destruct;
- (void)removeLogDelegate:forAccountInfoProvider:;
- (void)logDiagnosticForProvider:withLevel:format:args:;
- (BOOL)shouldLogAtLevel:forAccountInfoProvider:;
+ (id)sharedLogging;
@end
