@interface FLEXKBToolbarButton : UIButton
@property (nonatomic) NSString title;
@property (nonatomic) @? buttonPressBlock;
@property (nonatomic) BOOL useSystemAppearance;
@property (nonatomic) BOOL usingDarkMode;
@property (nonatomic) q appearance;
- (id)initWithTitle:;
- (void)addEventHandler:forControlEvents:;
- (void)buttonPressed;
- (void)setAppearance:;
- (BOOL)isEqual:;
- (unsigned long long)hash;
- (BOOL)useSystemAppearance;
- (BOOL)usingDarkMode;
- (void)traitCollectionDidChange:;
- (long long)appearance;
- (id)title;
- (void)setTitle:;
- (id)buttonPressBlock;
- (void)setButtonPressBlock:;
- (void).cxx_destruct;
+ (id)buttonWithTitle:;
+ (id)buttonWithTitle:action:forControlEvents:;
+ (id)buttonWithTitle:action:;
@end
