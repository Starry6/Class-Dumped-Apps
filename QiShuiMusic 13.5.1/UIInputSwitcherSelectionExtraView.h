@interface UIInputSwitcherSelectionExtraView : UIView
@property (nonatomic) double pointerOffset;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} keyRect;
@property (nonatomic) Q roundedCorners;
@property (nonatomic) UIKeyboardMenuView menu;
- (void)setMenu:;
- (void)drawRect:;
- (void)setFrame:;
- (id)menu;
- (id)initWithFrame:;
- (unsigned long long)roundedCorners;
- (void)setRoundedCorners:;
- (double)pointerOffset;
- (void)setPointerOffset:;
- (id)keyRect;
- (void)setKeyRect:;
@end
