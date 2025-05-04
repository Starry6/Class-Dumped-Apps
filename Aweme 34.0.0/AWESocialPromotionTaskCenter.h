@interface AWESocialPromotionTaskCenter : NSObject
- (void)updateFamiliarSettings:fromRequest:;
- (void)configWith:;
- (id)taskByTaskType:;
- (void)removeTaskByType:;
- (void)configTaskByType:with:;
- (unsigned long long)typeByString:;
- (id)typeStringByType:;
- (void)storeCacheSettingIfNeededByType:with:;
- (id)cacheSettingByType:;
- (id)settingCacheKeyByType:;
- (void)ieslc_messageHandler:didReceiveMsg:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedCenter;
@end
