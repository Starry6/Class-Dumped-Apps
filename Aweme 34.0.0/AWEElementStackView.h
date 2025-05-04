@interface AWEElementStackView : UIStackView
@property (nonatomic) BOOL subviewHitTestBeyondEdgeEnable;
- (void)layoutSubviews;
- (void)setSubviewHitTestBeyondEdgeEnable:;
- (BOOL)subviewHitTestBeyondEdgeEnable;
- (BOOL)isActiveOfView:;
- (id)hitTest:withEvent:;
@end
