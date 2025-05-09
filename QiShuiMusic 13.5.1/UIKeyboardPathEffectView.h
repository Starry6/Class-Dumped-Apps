@interface UIKeyboardPathEffectView : UIView
@property (nonatomic) UIKBHandwritingQuadCurvePointFIFO pointInterpolator;
@property (nonatomic) double startTime;
@property (nonatomic) NSMutableArray paths;
@property (nonatomic) BOOL increasedContrastEnabled;
@property (nonatomic) BOOL done;
@property (nonatomic) NSMutableIndexSet pointDecayQueue;
@property (nonatomic) CADisplayLink pointDecayDisplayLink;
- (int)textEffectsVisibilityLevel;
- (void)setPaths:;
- (void)drawRect:;
- (id)paths;
- (void)_displayLinkFired:;
- (void)setStartTime:;
- (long long)keyboardAppearance;
- (double)startTime;
- (void)setDone:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)reset;
- (BOOL)done;
- (id)_currentPath;
- (BOOL)increasedContrastEnabled;
- (void)setIncreasedContrastEnabled:;
- (void)accessibilityValueChanged:;
- (id)_pushNewPath;
- (void)_addDrawingPoint:force:sentinel:;
- (void)addPoint:force:timestamp:;
- (void)_clearPointInterpolators;
- (void)buildOut;
- (id)_currentThemeSettings;
- (id)pointInterpolator;
- (void)setPointInterpolator:;
- (id)pointDecayQueue;
- (void)setPointDecayQueue:;
- (id)pointDecayDisplayLink;
- (void)setPointDecayDisplayLink:;
@end
