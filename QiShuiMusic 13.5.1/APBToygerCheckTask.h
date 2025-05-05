@interface APBToygerCheckTask : APBToygerBaseTask
@property (nonatomic) BOOL isAudioPermissionNeed;
- (void)_addAlertAppearMonitor:;
- (void)_openUrl;
- (void)checkCameraPermission;
- (void)invokeWithPipeInfo:;
- (BOOL)isAudioPermissionNeed;
- (void)processEvent:withCompletionCallback:;
- (void)setIsAudioPermissionNeed:;
@end
