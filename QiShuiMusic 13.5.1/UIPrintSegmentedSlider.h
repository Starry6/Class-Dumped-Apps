@interface UIPrintSegmentedSlider : UISlider
@property (nonatomic) UISelectionFeedbackGenerator feedbackGenerator;
@property (nonatomic) BOOL segmented;
@property (nonatomic) BOOL locksToSegment;
@property (nonatomic) BOOL snapsToSegment;
@property (nonatomic) Q segmentCount;
- (void)drawRect:;
- (void)setValue:animated:;
- (id)thumbRectForBounds:trackRect:value:;
- (void)setFeedbackGenerator:;
- (id)feedbackGenerator;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setSegmentCount:;
- (void)sliderTapped:;
- (void)controlInteractionBegan:;
- (void)controlInteractionEnded:;
- (unsigned long long)numberOfTicks;
- (float)offsetBetweenTicksForNumberOfTicks:;
- (BOOL)isSegmented;
- (void)setSegmented:;
- (BOOL)locksToSegment;
- (void)setLocksToSegment:;
- (BOOL)snapsToSegment;
- (void)setSnapsToSegment:;
- (unsigned long long)segmentCount;
@end
