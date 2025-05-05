@interface AMapMonitorNSException : NSObject
@property (nonatomic) ^? originalHandler;
@property (nonatomic) BOOL hasInstalled;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) @? callback;
- (id)originalHandler;
- (id)handleUncaughtException:;
- (void)installNSExceptionHandle;
- (void)setOriginalHandler:;
- (void)uninstallNSExceptionHandle;
- (id)callback;
- (void)setCallback:;
- (id)init;
- (void).cxx_destruct;
- (void)setIsEnabled:;
- (BOOL)isEnabled;
- (void)setHasInstalled:;
- (BOOL)hasInstalled;
+ (id)shareInstance;
@end
