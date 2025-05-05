@interface BDMannorAdCommentElement : NSObject
@property (nonatomic) BOOL isBigFontABTestOn;
@property (nonatomic) BOOL commerceAgingAdapt;
@property (nonatomic) BOOL isPossibleLeadingBlurCrash;
@property (nonatomic) BOOL isThemeStyleLight;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSArray avatarThumbURLList;
@property (nonatomic) UIImage logoDefaultImage;
@property (nonatomic) UIImage closeButtonImage;
- (id)avatarThumbURLList;
- (id)closeButtonImage;
- (BOOL)commerceAgingAdapt;
- (BOOL)isBigFontABTestOn;
- (BOOL)isPossibleLeadingBlurCrash;
- (BOOL)isThemeStyleLight;
- (id)logoDefaultImage;
- (void)setAvatarThumbURLList:;
- (void)setCloseButtonImage:;
- (void)setCommerceAgingAdapt:;
- (void)setIsBigFontABTestOn:;
- (void)setIsPossibleLeadingBlurCrash:;
- (void)setIsThemeStyleLight:;
- (void)setLogoDefaultImage:;
- (id)init;
- (void)setDisplayName:;
- (id)displayName;
- (void).cxx_destruct;
@end
