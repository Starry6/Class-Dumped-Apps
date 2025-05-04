@interface AWEIMLeagueFIleBridgeManager : NSObject
- (void)downloadFileWithBridgeModel:;
- (id)convertBridgeModelToDownloaderModel:;
- (void)openFileViewControllerWithBridgeModel:configModel:;
+ (id)sharedInstance;
@end
