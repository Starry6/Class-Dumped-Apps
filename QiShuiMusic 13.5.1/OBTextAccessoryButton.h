@interface OBTextAccessoryButton : UIButton
@property (nonatomic) NSString textStyle;
- (id)textStyle;
- (void)setTextStyle:;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:;
+ (id)accessoryButtonWithTextStyle:;
@end
