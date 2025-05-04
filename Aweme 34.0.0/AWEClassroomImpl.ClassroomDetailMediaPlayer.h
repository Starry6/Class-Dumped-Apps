@interface AWEClassroomImpl.ClassroomDetailMediaPlayer : UIViewController
- (void)player:playbackFailedWithError:;
- (void)playerDidReadyForDisplay:;
- (void)player:didChangePlaybackStateWithAction:;
- (void)player:didChangeStallState:;
- (void)audioSessionInterruptedWithNotificaton:;
- (void)audioRouteChangedWithNotification:;
- (void)enterForeground;
- (void)orientationChanged;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (id)initWithNibName:bundle:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)initWithCoder:;
@end
