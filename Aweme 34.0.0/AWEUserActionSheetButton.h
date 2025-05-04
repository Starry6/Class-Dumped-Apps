@interface AWEUserActionSheetButton : UIButton
@property (nonatomic) AWEUserSheetAction action;
@property (nonatomic) UIColor defaultColor;
- (void)setAction:;
- (void)setHighlighted:;
- (id)action;
- (void).cxx_destruct;
- (id)defaultColor;
- (void)setDefaultColor:;
@end
