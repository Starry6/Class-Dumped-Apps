@interface IESECPagerViewMainScrollView : UIScrollView
@property (nonatomic) <IESECPagerViewMainScrollViewGestureDelegate> gestureDelegate;
@property (nonatomic) BOOL forwardHitTest;
@property (nonatomic) BOOL receiveAllEvents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)forwardHitTest;
- (BOOL)receiveAllEvents;
- (void)setForwardHitTest:;
- (void)setReceiveAllEvents:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (BOOL)pointInside:withEvent:;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
- (id)gestureDelegate;
- (void)setGestureDelegate:;
@end
