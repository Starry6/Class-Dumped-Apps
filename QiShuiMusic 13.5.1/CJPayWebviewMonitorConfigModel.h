@interface CJPayWebviewMonitorConfigModel : JSONModel
@property (nonatomic) BOOL enableMonitor;
@property (nonatomic) q detectBlankDelayTime;
@property (nonatomic) q webviewPageTimeoutTime;
- (long long)detectBlankDelayTime;
- (BOOL)enableMonitor;
- (void)setDetectBlankDelayTime:;
- (void)setEnableMonitor:;
- (void)setWebviewPageTimeoutTime:;
- (long long)webviewPageTimeoutTime;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
