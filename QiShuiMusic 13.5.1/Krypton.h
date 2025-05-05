@interface Krypton : NSObject
@property (nonatomic) NSMutableDictionary logFunctions;
- (void)registerLoggerWithKey:function:;
- (id)logFunctions;
- (id)logFunctionsArray;
- (void)registerFontLazyProvider:;
- (void)setLogFunctions:;
- (void)appWillEnterForeground:;
- (id)init;
- (void)dealloc;
- (void)appDidEnterBackground:;
- (void).cxx_destruct;
- (void)appWillTerminate:;
+ (long long)EnsureTaskRunnerForCurrentThread;
+ (id)shareInstance;
@end
