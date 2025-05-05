@interface AMapMonitorSingal : NSObject
@property (nonatomic) BOOL hasInstalled;
@property (nonatomic) NSMutableDictionary originalSignalAction;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) @? callback;
- (id)handleSignal:info:context:withCallStackSymbols:;
- (void)installSingalHandle;
- (id)originalSignalAction;
- (void)setOriginalSignalAction:;
- (void)uninstallSingalHandle;
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
