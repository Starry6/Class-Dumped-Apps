@interface OBHeaderAccessoryButton : UIButton
@property (nonatomic) BOOL underlineLinks;
- (void)_updateText;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:;
- (BOOL)underlineLinks;
- (void)setUnderlineLinks:;
- (id)_fontTextStyle;
+ (id)buttonWithType:;
+ (id)accessoryButton;
@end
