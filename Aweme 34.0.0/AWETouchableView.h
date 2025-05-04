@interface AWETouchableView : UIView
@property (nonatomic) BOOL disableBgColorChange;
- (BOOL)disableBgColorChange;
- (void)resetColor;
- (void)setDisableBgColorChange:;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesBegan:withEvent:;
@end
