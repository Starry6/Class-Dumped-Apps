@interface AWELoginGuideStorageManager : NSObject
- (id)storageOfScene:;
- (id)storageKeyForScene:;
- (id)storageOfSceneType:methodType:;
- (id)storageKeyForSceneType:methodType:;
- (void)logForScene:message:;
- (id)updateStorageForScene:;
- (void)recordShowOfScene:;
- (void)recordSkipOfScene:;
- (void)updateSkipDateOfScene:date:;
- (void)recordFailOfScene:;
- (void)updateFailDateOfScene:date:;
- (void)resetNewPeriodOfScene:;
- (void)resetSkipOfScene:;
- (void)resetFailOfScene:;
- (void)resetPeriodShowCountOfScene:;
+ (id)shareManager;
@end
