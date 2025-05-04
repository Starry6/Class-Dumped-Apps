@interface AWEDetailBottomActionButtonConfig : NSObject
@property (nonatomic) UIImage iconImage;
@property (nonatomic) NSString key;
@property (nonatomic) NSString title;
@property (nonatomic) Q buttonType;
@property (nonatomic) Q colorStyle;
@property (nonatomic) Q sizeStyle;
@property (nonatomic) @? actionBlock;
@property (nonatomic) @? setupBlock;
- (void)setSizeStyle:;
- (unsigned long long)buttonType;
- (id)iconImage;
- (void)setKey:;
- (void)setIconImage:;
- (id)key;
- (void).cxx_destruct;
- (id)setupBlock;
- (id)title;
- (void)setButtonType:;
- (void)setTitle:;
- (void)setSetupBlock:;
- (void)setActionBlock:;
- (id)actionBlock;
- (unsigned long long)sizeStyle;
- (unsigned long long)colorStyle;
- (void)setColorStyle:;
+ (id)collectButtonConfigWithActionBlock:;
@end
