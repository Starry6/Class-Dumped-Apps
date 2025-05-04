@interface AWEBaseElementView : UIView
@property (nonatomic) NSString elementClassName;
@property (nonatomic) BOOL subviewHitTestBeyondEdgeEnable;
- (void)setSubviewHitTestBeyondEdgeEnable:;
- (BOOL)subviewHitTestBeyondEdgeEnable;
- (void)setElementClassName:;
- (BOOL)isActiveOfView:;
- (id)elementClassName;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
@end
