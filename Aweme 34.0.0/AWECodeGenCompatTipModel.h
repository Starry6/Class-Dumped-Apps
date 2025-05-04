@interface AWECodeGenCompatTipModel : AWEBaseDataModel
@property (nonatomic) BOOL showCompatTip;
@property (nonatomic) NSString toastText;
@property (nonatomic) BOOL cellNoJump;
@property (nonatomic) NSString avatarText;
- (id)toastText;
- (void)setToastText:;
- (BOOL)showCompatTip;
- (id)avatarText;
- (void)setShowCompatTip:;
- (BOOL)cellNoJump;
- (void)setCellNoJump:;
- (void)setAvatarText:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
