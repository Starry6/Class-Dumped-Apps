@interface SAUIButton : SAAceView
@property (nonatomic) SAUIColor backgroundColor;
@property (nonatomic) NSArray commands;
@property (nonatomic) SAUIImageResource image;
@property (nonatomic) NSString secondaryText;
@property (nonatomic) NSString text;
@property (nonatomic) SAUIColor textColor;
- (void)setBackgroundColor:;
- (id)groupIdentifier;
- (void)setSecondaryText:;
- (id)backgroundColor;
- (void)setText:;
- (void)setImage:;
- (id)commands;
- (id)secondaryText;
- (void)setTextColor:;
- (id)encodedClassName;
- (id)textColor;
- (void)setCommands:;
- (id)text;
- (id)image;
+ (id)button;
+ (id)buttonWithDictionary:context:;
@end
