@interface UITextLiveConversionInteraction : UITextInteraction
@property (nonatomic) double pointSize;
- (double)pointSize;
- (id)initWithTextInput:;
- (void)willMoveToView:;
- (void)_tap:;
- (void).cxx_destruct;
- (void)_pan:;
- (id)_liveConversionTapGestureRecognizer;
- (id)_liveConversionPanGestureRecognizer;
@end
