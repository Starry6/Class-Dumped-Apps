@interface AWEUGDesktopGuideMessageMonitor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)desktopChannelGuideAlreadyShowWithScene:enterFrom:guideType:extraParams:config:;
- (void)onAppDidBecomeActive;
- (void)onAppWillTerminate;
@end
