@interface TTVideoEngineConfigCenter : NSObject
@property (nonatomic) NSMutableDictionary configMap;
@property (nonatomic) NSObject<OS_dispatch_semaphore> signal;
@property (nonatomic) NSMutableString logString;
- (void)_releaseLog;
- (void)alogWithConfig:value:tag:;
- (id)configForKey:ofTag:;
- (id)configMap;
- (void)releaseLog;
- (void)removeConfigurationsForTag:;
- (void)saveConfig:forKey:ofTag:;
- (void)saveConfigurations:ofTag:;
- (void)setConfigMap:;
- (id)signal;
- (void)setSignal:;
- (id)logString;
- (void).cxx_destruct;
- (void)setLogString:;
+ (id)defaultCenter;
@end
