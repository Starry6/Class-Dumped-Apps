@interface MRLogBuffer : NSObject
@property (nonatomic) NSArray history;
@property (nonatomic) {os_unfair_lock_s=I} lock;
@property (nonatomic) q capacity;
@property (nonatomic) NSObject<OS_os_log> category;
@property (nonatomic) NSString prefix;
- (long long)capacity;
- (void)logError:;
- (id)history;
- (id)lock;
- (void)logInfo:;
- (void)setHistory:;
- (id)prefix;
- (void).cxx_destruct;
- (void)log:;
- (id)description;
- (id)category;
- (id)initWithCapacity:category:prefix:;
- (void)logDebug:;
- (void)logFault:;
- (void)logWithoutCapture:;
- (void)logInfoWithoutCapture:;
- (void)logDebugWithoutCapture:;
- (void)logErrorWithoutCapture:;
- (void)logFaultWithoutCapture:;
- (void)log:withType:capture:;
+ (id)bufferWithCapacity:category:loggingPrefix:;
@end
