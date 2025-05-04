@interface AWEPadSplitTransitionNotificationManager : NSObject
@property (nonatomic) BOOL popFromMediaFeedVC;
@property (nonatomic) <AWEPadSplitTransitionNotificationManagerDelegate> delegate;
- (void)viewControllerTransitionNotification:;
- (BOOL)popFromMediaFeedVC;
- (void)setPopFromMediaFeedVC:;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)addObservers;
@end
