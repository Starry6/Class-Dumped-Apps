@interface AWEUserDetailIconView : UIControl
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIImageView addImageView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) BOOL isFromFamiliar;
- (id)addImageView;
- (void)setAddImageView:;
- (BOOL)isFromFamiliar;
- (void)setIsFromFamiliar:;
- (id)aAWEUserProfileMutiTargetConfigCommonAdapter;
- (void)relayoutTextLabel;
- (void)updateFCollectFollow:;
- (void)switchToFollow:;
- (void)switchToSendMsgWithUser:;
- (id)textLabel;
- (id)initWithFrame:;
- (BOOL)isDarkTheme;
- (void)setHighlighted:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setTextLabel:;
+ (Class)aAWEUserProfileMutiTargetConfigCommonAdapterClass;
@end
