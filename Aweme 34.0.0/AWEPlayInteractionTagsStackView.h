@interface AWEPlayInteractionTagsStackView : UIStackView
@property (nonatomic) BOOL subviewHitTestBeyondEdgeEnable;
- (void)setSubviewHitTestBeyondEdgeEnable:;
- (BOOL)subviewHitTestBeyondEdgeEnable;
- (BOOL)isActiveOfView:;
- (id)hitTest:withEvent:;
@end
