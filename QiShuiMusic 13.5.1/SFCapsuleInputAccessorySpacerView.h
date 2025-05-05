@interface SFCapsuleInputAccessorySpacerView : UIView
@property (nonatomic) double capsuleHeight;
- (id)sizeThatFits:;
- (id)initWithCapsuleView:initialWidth:;
- (void)setCapsuleHeight:;
- (double)capsuleHeight;
@end
