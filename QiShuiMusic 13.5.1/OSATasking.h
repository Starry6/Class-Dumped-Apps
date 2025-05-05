@interface OSATasking : NSObject
+ (id)proxyTasking:taskId:usingConfig:fromBlob:;
+ (id)applyTasking:taskId:fromBlob:;
+ (void)checkTaskingRelevance;
+ (id)getInstalledTaskIds;
+ (id)getAvailableTaskingRoutings;
+ (BOOL)shouldApplyPreference:;
+ (id)getDefaultTasking;
+ (id)normalizeInstructions:;
+ (BOOL)preference:alreadySetInInstructions:;
+ (id)selectConfigFromBlob:withError:;
+ (void)setCRKeyToRandomValue;
@end
