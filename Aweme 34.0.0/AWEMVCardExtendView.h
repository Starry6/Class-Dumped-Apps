@interface AWEMVCardExtendView : UIButton
@property (nonatomic) {UIEdgeInsets=dddd} interactionZoneEnlargeInsets;
- (void)setInteractionZoneEnlargeInsets:;
- (id)interactionZoneEnlargeInsets;
- (BOOL)canInteractToPoint:;
- (id)hitTest:withEvent:;
@end
