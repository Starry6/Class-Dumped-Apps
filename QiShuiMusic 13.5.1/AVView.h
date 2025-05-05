@interface AVView : UIView
@property (nonatomic) BOOL hasBackdropView;
@property (nonatomic) BOOL ignoresTouches;
- (id)hitTest:withEvent:;
- (BOOL)ignoresTouches;
- (void)setIgnoresTouches:;
- (void)setHidden:;
- (BOOL)hasBackdropView;
- (void)setHasBackdropView:;
@end
