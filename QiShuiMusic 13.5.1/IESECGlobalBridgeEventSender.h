@interface IESECGlobalBridgeEventSender : NSObject
- (void)addTakeScreenshotObserver;
- (void)removeTakeScreenshotObserver;
- (void)userDidTakeScreenshot:;
+ (id)sharedInstance;
@end
