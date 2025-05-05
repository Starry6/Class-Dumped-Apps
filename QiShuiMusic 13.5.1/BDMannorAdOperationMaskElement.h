@interface BDMannorAdOperationMaskElement : NSObject
@property (nonatomic) NSString learnMoreButtonText;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString descriptionString;
@property (nonatomic) NSArray avatarMediumURLList;
@property (nonatomic) UIImage logoDefaultImage;
@property (nonatomic) UIImage maskMoreLinkIcon;
- (id)avatarMediumURLList;
- (id)learnMoreButtonText;
- (id)logoDefaultImage;
- (id)maskMoreLinkIcon;
- (void)setAvatarMediumURLList:;
- (void)setLearnMoreButtonText:;
- (void)setLogoDefaultImage:;
- (void)setMaskMoreLinkIcon:;
- (void)setDescriptionString:;
- (id)descriptionString;
- (id)nickname;
- (void).cxx_destruct;
- (void)setNickname:;
@end
