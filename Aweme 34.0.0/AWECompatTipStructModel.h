@interface AWECompatTipStructModel : AWEBaseApiModel
@property (nonatomic) BOOL showCompatTip;
@property (nonatomic) NSString toastText;
@property (nonatomic) NSString avatarText;
- (id)toastText;
- (void)setToastText:;
- (BOOL)showCompatTip;
- (id)avatarText;
- (void)setShowCompatTip:;
- (void)setAvatarText:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
