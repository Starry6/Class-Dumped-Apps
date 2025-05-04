@interface AWEPerfEvaluateSmartService : AWEBaseSmartServiceImpl
@property (nonatomic) <AWEPerfEvaluateSmartServiceResultListener> resultListener;
- (void)collectWithFeatures:;
- (id)init;
- (void).cxx_destruct;
- (id)resultListener;
- (void)setResultListener:;
+ (id)abTestConfig;
@end
