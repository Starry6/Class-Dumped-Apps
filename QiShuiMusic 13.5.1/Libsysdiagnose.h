@interface Libsysdiagnose : NSObject
+ (id)setupConnection;
+ (id)sysdiagnoseWithMetadata:withError:;
+ (id)sysdiagnoseWithMetadata:withMetrics:withError:;
+ (id)createSysdiagnoseRequest:;
+ (int)addErrorString:WithCode:forError:;
+ (void)createMetrics:fromResponse:;
+ (BOOL)verifyReply:withExpectedType:forError:;
+ (id)sendSysdiagnoseRequest:withMetrics:withError:withProgressHandler:;
+ (id)sysdiagnoseWithMetadata:withMetrics:withError:withProgressCallback:;
+ (id)sysdiagnoseWithMetadata:withMetrics:withError:withProgressHandler:;
+ (void)sysdiagnoseWithMetadata:onCompletion:;
+ (id)sysdiagnoseWithMetadata:withError:andProgressHandler:;
+ (id)sysdiagnoseWithMetadata:withError:withProgressHandler:;
+ (BOOL)isSysdiagnoseInProgressWithError:;
+ (BOOL)cancelActiveSysdiagnoseWithError:;
+ (id)fetchDiagnosticIDFromDeviceSource:WithMaxCount:withError:;
+ (id)fetchRemoteDiagnosticIDsWithError:;
+ (id)getSysdiagnoseCrashLog;
@end
