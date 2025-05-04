@interface AWEScreenShotTracker : NSObject
- (void)didDetectedScreenShot:;
+ (id)sharedInstance;
@end
