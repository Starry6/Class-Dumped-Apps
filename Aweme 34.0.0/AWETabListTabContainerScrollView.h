@interface AWETabListTabContainerScrollView : UIScrollView
@property (nonatomic) AWETabListTabMagicPanGestureRecognizer magicPanGestureRecognizer;
@property (nonatomic) BOOL enableGestureRecognizerControl;
@property (nonatomic) BOOL disableManualPan;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)magicPan;
- (void)setMagicPanGestureRecognizer:;
- (id)magicPanGestureRecognizer;
- (BOOL)isScrollingTabContentWithGestureRecognizer:;
- (void)setEnableGestureRecognizerControl:;
- (BOOL)enableGestureRecognizerControl;
- (BOOL)disableManualPan;
- (void)setDisableManualPan:;
- (void)willMoveToSuperview:;
- (id)initWithFrame:;
- (BOOL)gestureRecognizerShouldBegin:;
- (BOOL)_gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void).cxx_destruct;
@end
