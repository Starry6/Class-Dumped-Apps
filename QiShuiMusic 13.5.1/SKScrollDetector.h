@interface SKScrollDetector : NSObject
@property (nonatomic) NSMutableArray subscribedScrollers;
@property (nonatomic) <SKScreenTrackingDelegate> screenTrakingDelegate;
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)findAndListenForScrollingOfView:;
- (void)stopListeningForScrollingOfView:;
- (id)screenTrakingDelegate;
- (void)setScreenTrakingDelegate:;
- (id)subscribedScrollers;
- (void)setSubscribedScrollers:;
@end
