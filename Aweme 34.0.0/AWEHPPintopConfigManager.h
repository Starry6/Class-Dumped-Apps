@interface AWEHPPintopConfigManager : NSObject
@property (nonatomic) NSDictionary modelMap;
- (id)getConfigChannelModelWithTabID:;
- (long long)getPinTopTriggerTimeWithTabID:;
- (id)modelMap;
- (void)setModelMap:;
- (void)setUp;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
