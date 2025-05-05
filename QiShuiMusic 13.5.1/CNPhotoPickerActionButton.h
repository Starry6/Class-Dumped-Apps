@interface CNPhotoPickerActionButton : UIButton
@property (nonatomic) BOOL isDestructive;
@property (nonatomic) CNPhotoPickerActionButtonBlockHandler blockHandler;
- (BOOL)isDestructive;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setIsDestructive:;
- (void)performActionBlock;
- (id)blockHandler;
- (void)setBlockHandler:;
+ (id)buttonWithTitle:actionBlock:;
+ (id)defaultButtonWithTitle:actionBlock:;
+ (id)destructiveButtonWithTitle:actionBlock:;
@end
