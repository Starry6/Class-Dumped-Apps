@interface UIPanelBorderView : UIView
@property (nonatomic) UIPanelBorderReplicatingView replicatingView;
@property (nonatomic) BOOL observesTime;
@property (nonatomic) NSString backdropGroupName;
@property (nonatomic) q statusBarAvoidance;
@property (nonatomic) BOOL draggable;
- (void)setDraggable:;
- (void)layoutSubviews;
- (BOOL)isDraggable;
- (void)setBackdropGroupName:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)backdropGroupName;
- (void)setStatusBarAvoidance:;
- (id)_cachedBackdropGroupName;
- (long long)statusBarAvoidance;
- (id)replicatingView;
- (void)setReplicatingView:;
- (BOOL)observesTime;
- (void)setObservesTime:;
@end
