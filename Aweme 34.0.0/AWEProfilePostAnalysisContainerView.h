@interface AWEProfilePostAnalysisContainerView : UIView
@property (nonatomic) UIView lastTouchedView;
@property (nonatomic) UIScrollView lastFoundScrollView;
@property (nonatomic) @? updateInnerScrollViewBlock;
- (void)setUpdateInnerScrollViewBlock:;
- (BOOL)enableDragOptimize;
- (id)lastTouchedView;
- (void)setLastTouchedView:;
- (id)findScrollableScrollView:;
- (void)setLastFoundScrollView:;
- (id)updateInnerScrollViewBlock;
- (id)lastFoundScrollView;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
@end
