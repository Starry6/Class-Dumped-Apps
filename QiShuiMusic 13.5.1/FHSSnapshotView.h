@interface FHSSnapshotView : UIView
@property (nonatomic) SCNView sceneView;
@property (nonatomic) NSString currentSummary;
@property (nonatomic) NSDictionary nodesMap;
@property (nonatomic) q maxDepth;
@property (nonatomic) FHSSnapshotNodes highlightedNodes;
@property (nonatomic) BOOL hideHeaders;
@property (nonatomic) BOOL hideBorders;
@property (nonatomic) BOOL suppressSelectionEvents;
@property (nonatomic) BOOL mustHideHeaders;
@property (nonatomic) <FHSSnapshotViewDelegate> delegate;
@property (nonatomic) NSArray snapshots;
@property (nonatomic) FHSViewSnapshot selectedView;
@property (nonatomic) NSArray headerExclusions;
@property (nonatomic) UISlider spacingSlider;
@property (nonatomic) FHSRangeSlider depthSlider;
- (id)initWithFrame:;
- (void)initSceneView;
- (void)initSpacingSlider;
- (void)initDepthSlider;
- (void)setSelectedView:;
- (void)setSnapshots:;
- (void)setHeaderExclusions:;
- (void)emphasizeViews:;
- (void)emphasizeViews:inSnapshots:;
- (void)toggleShowHeaders;
- (void)toggleShowBorders;
- (void)hideView:;
- (BOOL)mustHideHeaders;
- (void)setMaxDepth:;
- (void)setHideHeaders:;
- (void)setHideBorders:;
- (id)nodesAtPoint:;
- (void)selectSnapshot:;
- (void)hideHeaders;
- (void)unhideHeaders;
- (void)handleTap:;
- (void)spacingSliderDidChange:;
- (void)depthSliderDidChange:;
- (id)delegate;
- (void)setDelegate:;
- (id)snapshots;
- (id)selectedView;
- (id)headerExclusions;
- (id)spacingSlider;
- (id)depthSlider;
- (id)sceneView;
- (id)currentSummary;
- (void)setCurrentSummary:;
- (id)nodesMap;
- (void)setNodesMap:;
- (long long)maxDepth;
- (id)highlightedNodes;
- (void)setHighlightedNodes:;
- (BOOL)wantsHideHeaders;
- (BOOL)wantsHideBorders;
- (BOOL)suppressSelectionEvents;
- (void)setSuppressSelectionEvents:;
- (void).cxx_destruct;
+ (id)delegate:;
@end
