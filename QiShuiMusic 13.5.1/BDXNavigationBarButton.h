@interface BDXNavigationBarButton : UIButton
@property (nonatomic) {UIEdgeInsets=dddd} buttonHitTestEdgeInsets;
- (id)buttonHitTestEdgeInsets;
- (void)setButtonHitTestEdgeInsets:;
- (BOOL)pointInside:withEvent:;
@end
