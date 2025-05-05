@interface BWDeviceOrientationMonitor : NSObject
@property (nonatomic) I mostRecentPortraitLandscapeOrientation;
@property (nonatomic) <BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate> portraitLandscapeUpdateDelegate;
- (id)init;
- (void)dealloc;
- (BOOL)start;
- (BOOL)stop;
- (id)portraitLandscapeUpdateDelegate;
- (void)setPortraitLandscapeUpdateDelegate:;
- (unsigned int)mostRecentPortraitLandscapeOrientation;
@end
