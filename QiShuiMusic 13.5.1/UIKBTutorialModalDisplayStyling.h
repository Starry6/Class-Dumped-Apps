@interface UIKBTutorialModalDisplayStyling : NSObject
@property (nonatomic) NSArray backgroundEffects;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor mainTextColor;
@property (nonatomic) UIColor buttonTextColor;
- (void)setBackgroundColor:;
- (void)setButtonTextColor:;
- (id)backgroundColor;
- (id)backgroundEffects;
- (void)setBackgroundEffects:;
- (void).cxx_destruct;
- (id)buttonTextColor;
- (id)initWithKeyboardAppearance:;
- (id)backgroundBlurEffects:;
- (id)mainTextColor;
- (void)setMainTextColor:;
@end
