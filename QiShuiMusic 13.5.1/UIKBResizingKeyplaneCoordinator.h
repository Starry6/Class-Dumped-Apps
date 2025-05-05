@interface UIKBResizingKeyplaneCoordinator : NSObject
@property (nonatomic) <UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> delegate;
@property (nonatomic) double resizingOffset;
@property (nonatomic) UIPanGestureRecognizer gestureRecognizer;
@property (nonatomic) BOOL isResizing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)resizingOffset;
- (void)updateGestureRecognizers;
- (void)dimKeys:;
- (void)uninstallGestureRecognizers;
- (id)init;
- (void)stopResizing;
- (void)setDelegate:;
- (void)updateGrabber;
- (void)setRenderConfig:;
- (void)saveResizingStopIndex:;
- (id)gestureRecognizer;
- (BOOL)isResizing;
- (id)delegate;
- (void)handleResizeGesture:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)resizeKeyplaneWithOffset:andRedraw:;
- (void)reloadResizingOffset;
+ (double)savedResizingOffset;
@end
