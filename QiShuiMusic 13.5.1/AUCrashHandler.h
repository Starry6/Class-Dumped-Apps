@interface AUCrashHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (void)willWriteDiagnosticLog:logId:logInfo:;
- (void)didWriteDiagnosticLog:logId:logFilePath:logInfo:error:;
- (id)initWithPid:withCrashBlock:;
+ (BOOL)_pathIsApple:;
+ (BOOL)_bundleIdentifierIsApple:;
+ (BOOL)_isAppleApplicationInPath:bundle:;
+ (id)_deanonymizeUserHomePath:;
@end
