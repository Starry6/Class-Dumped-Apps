@interface AWECommerceTapMaskView : UIView
@property (nonatomic) BOOL isTapped;
- (void)setIsTapped:;
- (BOOL)isTapped;
- (id)init;
- (id)hitTest:withEvent:;
@end
