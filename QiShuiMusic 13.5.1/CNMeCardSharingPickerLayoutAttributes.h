@interface CNMeCardSharingPickerLayoutAttributes : NSObject
@property (nonatomic) double topToAvatarPadding;
@property (nonatomic) UIFont headerFont;
@property (nonatomic) {CGSize=dd} avatarViewSize;
@property (nonatomic) double avatarViewToNamePadding;
@property (nonatomic) UIColor backgroundColor;
- (id)backgroundColor;
- (id)headerFont;
- (void).cxx_destruct;
- (id)initWithTopToAvatarPadding:headerFont:avatarViewSize:avatarViewToNamePadding:backgroundColor:;
- (double)topToAvatarPadding;
- (id)avatarViewSize;
- (double)avatarViewToNamePadding;
+ (id)buddyHeaderFont;
+ (id)settingsHeaderFont;
+ (id)layoutAttributesForBuddy;
+ (id)layoutAttributesForSettings;
@end
