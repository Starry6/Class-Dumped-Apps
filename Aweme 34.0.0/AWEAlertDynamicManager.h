@interface AWEAlertDynamicManager : NSObject
@property (nonatomic) NSDictionary alertUpdatedConfigMap;
- (void)cleanConfigCaches;
- (void)updateConfigIfNeeded;
- (id)alertUpdatedConfigMap;
- (void)setAlertUpdatedConfigMap:;
- (BOOL)dynamicDisabled;
- (void)updateAlertBeforeAddAlert:alertID:;
- (void).cxx_destruct;
@end
