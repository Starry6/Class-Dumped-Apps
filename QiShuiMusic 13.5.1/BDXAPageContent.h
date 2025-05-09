@interface BDXAPageContent : NSObject
@property (nonatomic) NSString pageTitle;
@property (nonatomic) NSString pageTip;
@property (nonatomic) NSString defaultInput;
@property (nonatomic) NSString inputPlaceholder;
@property (nonatomic) NSString mainButtonText;
@property (nonatomic) NSString otherButtonText;
@property (nonatomic) NSDictionary topRightButton;
@property (nonatomic) NSDictionary agreements;
@property (nonatomic) NSDictionary bottomClickableText;
@property (nonatomic) NSDictionary alertClickableText;
@property (nonatomic) NSArray thirdParties;
@property (nonatomic) NSArray displayedExtraLoginArray;
@property (nonatomic) NSArray packedExtraLoginArray;
@property (nonatomic) NSArray excludeExtraLoginArray;
@property (nonatomic) NSDictionary extraContentDictionary;
@property (nonatomic) q shouldDisplayCheckBox;
@property (nonatomic) double buttonRadius;
- (id)pageTip;
- (id)agreementPrefixText;
- (id)agreements;
- (id)alertClickableText;
- (id)bottomClickableText;
- (id)displayedExtraLoginArray;
- (id)excludeExtraLoginArray;
- (id)extraContentDictionary;
- (id)mainButtonText;
- (id)packedExtraLoginArray;
- (void)setAgreements:;
- (void)setAlertClickableText:;
- (void)setBottomClickableText:;
- (void)setButtonRadius:;
- (void)setDefaultInput:;
- (void)setDisplayedExtraLoginArray:;
- (void)setExcludeExtraLoginArray:;
- (void)setExtraContentDictionary:;
- (void)setMainButtonText:;
- (void)setPackedExtraLoginArray:;
- (void)setPageTip:;
- (void)setShouldDisplayCheckBox:;
- (void)setThirdParties:;
- (void)setTopRightButton:;
- (long long)shouldDisplayCheckBox;
- (id)thirdParties;
- (id)topRightButton;
- (id)topRigtButtonTitle;
- (id)topRigtButtonUrl;
- (id)inputPlaceholder;
- (void)setInputPlaceholder:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)defaultInput;
- (id)otherButtonText;
- (void)setOtherButtonText:;
- (id)pageTitle;
- (void)setPageTitle:;
- (double)buttonRadius;
@end
