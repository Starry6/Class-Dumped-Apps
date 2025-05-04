@interface AWEIMInteractPolymericCellBottomViewCell : UICollectionViewCell
@property (nonatomic) UIImageView avatarImage;
@property (nonatomic) AWEUserModel userModel;
- (void)configWithModel:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setAvatarImage:;
- (id)avatarImage;
- (void)startAnimationWithCompletion:;
- (void)_setupUI;
+ (id)identifier;
+ (id)_defaultImage;
@end
