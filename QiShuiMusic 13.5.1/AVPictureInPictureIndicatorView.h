@interface AVPictureInPictureIndicatorView : UIView
@property (nonatomic) AVPictureInPictureIndicatorLayer pipIndicatorLayer;
@property (nonatomic) NSString customMessage;
- (void)_updateGeometry;
- (void)setBackgroundColor:;
- (void)layoutSublayersOfLayer:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)customMessage;
- (void)setCustomMessage:;
- (void)_addIndicatorLayerIfNeeded;
- (id)pipIndicatorLayer;
- (void)setPipIndicatorLayer:;
@end
