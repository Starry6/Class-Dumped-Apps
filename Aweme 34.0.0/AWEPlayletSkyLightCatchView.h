@interface AWEPlayletSkyLightCatchView : UIView
@property (nonatomic) UIPanGestureRecognizer panGesture;
@property (nonatomic) <AWEPlayletSkyLightCatchViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)panGestureAction:;
- (id)delegate;
- (id)initWithFrame:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)setDelegate:;
- (id)panGesture;
- (void)setPanGesture:;
@end
