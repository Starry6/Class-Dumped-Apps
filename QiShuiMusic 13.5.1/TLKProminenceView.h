@interface TLKProminenceView : UIView
@property (nonatomic) Q prominence;
- (id)initWithProminence:;
- (id)init;
- (void)setProminence:;
- (unsigned long long)prominence;
- (void)tlk_updateForAppearance:;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
+ (id)viewWithProminence:;
@end
