@interface BDXLynxOverlayLightSimultaneouslyGestureRecognizer : UIGestureRecognizer
@property (nonatomic) <BDXLynxOverlayLightViewDelegate> uiDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canBePreventedByGestureRecognizer:;
- (id)uiDelegate;
- (void)touchesBegan:withEvent:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setUiDelegate:;
- (void).cxx_destruct;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id)initWithTarget:action:;
- (void)touchesCancelled:withEvent:;
@end
