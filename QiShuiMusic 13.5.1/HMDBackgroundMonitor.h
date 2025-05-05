@interface HMDBackgroundMonitor : NSObject
@property (nonatomic) BOOL isBackground;
- (void)backgroundNotification:;
- (void)foregroundNotification:;
- (void)updateBackgroundState;
- (BOOL)isBackground;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
