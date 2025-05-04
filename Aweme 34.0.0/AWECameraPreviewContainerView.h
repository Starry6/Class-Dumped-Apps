@interface AWECameraPreviewContainerView : UIView
@property (nonatomic) <VERecorderPublicProtocol> camera;
@property (nonatomic) BOOL enableInteraction;
@property (nonatomic) BOOL shouldHandleTouch;
@property (nonatomic) @? touchFilter;
- (BOOL)enableInteraction;
- (void)setEnableInteraction:;
- (BOOL)shouldHandleTouch;
- (void)setShouldHandleTouch:;
- (id)touchFilter;
- (void)setTouchFilter:;
- (void)p_handleTouchs:withEvent:touchType:;
- (id)camera;
- (id)init;
- (void)setCamera:;
- (id)initWithFrame:;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)touchesMoved:withEvent:;
@end
