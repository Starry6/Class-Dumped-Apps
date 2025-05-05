@interface UIInputSwitcherSegmentControl : UIControl
@property (nonatomic) UIStackView stackView;
@property (nonatomic) BOOL usesDarkTheme;
@property (nonatomic) q selectedSegmentIndex;
@property (nonatomic) Q numberOfSegments;
@property (nonatomic) NSArray segmentTitles;
@property (nonatomic) NSArray segmentImages;
- (void)touchesBegan:withEvent:;
- (void)setStackView:;
- (void)layoutSubviews;
- (id)stackView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)updateSelectionWithPoint:;
- (BOOL)usesDarkTheme;
- (void)touchesMoved:withEvent:;
- (BOOL)shouldTrack;
- (unsigned long long)numberOfSegments;
- (long long)selectedSegmentIndex;
- (void)setSelectedSegmentIndex:;
- (void)setUsesDarkTheme:;
- (void)_removeAllSegmentViews;
- (void)_populateSegmentViewsWithCount:;
- (void)setSegmentTitles:;
- (void)setSegmentImages:;
- (id)segmentTitles;
- (id)segmentImages;
@end
