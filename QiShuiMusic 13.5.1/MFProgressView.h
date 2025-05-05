@interface MFProgressView : UIView
@property (nonatomic) <MFProgressViewDelegate> delegate;
@property (nonatomic) UIColor tintColor;
- (void)drawRect:;
- (void)dealloc;
- (id)intrinsicContentSize;
- (void)setDelegate:;
- (void)setProgress:;
- (id)tintColor;
- (void)_onDisplayLink:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setTintColor:;
- (void)_invalidateDisplayLink;
- (void)simulateActivity;
- (id)initWithProgressViewStyle:stroke:frame:;
- (void)progressDidFinish;
- (void)_invalidateSimulationTimer;
- (void)_adjustProgress;
- (void)_drawProgressInRect:;
- (BOOL)_isValidCenter:radius:rect:;
- (void)_drawCircleWithCenter:radius:;
- (void)_drawWedgeWithCenter:radius:;
- (void)_stopSimulationIfCompleted;
+ (id)progressViewWithDefaultStyleStrokeAndRect;
@end
