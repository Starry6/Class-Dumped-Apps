@interface AWEMemoryGraphGenerateRequest : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) NSNumber maxMemoryUsage;
@property (nonatomic) NSNumber maxFileSize;
@property (nonatomic) BOOL useNaiveVersion;
@property (nonatomic) @? checker;
@property (nonatomic) NSMutableDictionary jsonOutput;
@property (nonatomic) BOOL doCppSymbolic;
@property (nonatomic) Q memoryUsageBeforeSuspend;
@property (nonatomic) Q timeOutDuration;
@property (nonatomic) @? threadParser;
@property (nonatomic) NSMutableDictionary extraConfiguration;
- (BOOL)useNaiveVersion;
- (unsigned long long)timeOutDuration;
- (BOOL)doCppSymbolic;
- (id)extraConfiguration;
- (id)jsonOutput;
- (id)maxMemoryUsage;
- (unsigned long long)memoryUsageBeforeSuspend;
- (void)setChecker:;
- (void)setDoCppSymbolic:;
- (void)setExtraConfiguration:;
- (void)setJsonOutput:;
- (void)setMaxMemoryUsage:;
- (void)setMemoryUsageBeforeSuspend:;
- (void)setThreadParser:;
- (void)setTimeOutDuration:;
- (void)setUseNaiveVersion:;
- (id)threadParser;
- (id)path;
- (id)maxFileSize;
- (void)dealloc;
- (void)setPath:;
- (void)setMaxFileSize:;
- (id)checker;
@end
