@interface CNUICoreEditAuthorizationCheck : NSObject
@property (nonatomic) CNContact contact;
@property (nonatomic) CNContainer parentContainer;
@property (nonatomic) BOOL ignoresParentalRestrictions;
@property (nonatomic) <CNUICoreScreentimePasscodeCheck> screenTimePasscodeStatusCheck;
@property (nonatomic) <CNUICoreParentContainerProvider> linkedParentContainerProvider;
- (id)contact;
- (BOOL)ignoresParentalRestrictions;
- (void).cxx_destruct;
- (id)initWithContact:parentContainer:ignoresParentalRestrictions:;
- (id)initWithContact:parentContainer:ignoresParentalRestrictions:linkedParentContainerProvider:;
- (BOOL)shouldBypassRestrictionsGivenAuthorizationResult:;
- (id)parentContainer;
- (BOOL)shouldPromptForPasscodeAuthorization;
- (id)initWithContact:parentContainer:ignoresParentalRestrictions:screenTimePasscodeStatusCheck:linkedParentContainerProvider:;
- (BOOL)canPerformValidAuthorizationCheck;
- (BOOL)shouldRespectParentalRestrictions;
- (BOOL)editAltersRestrictedInformation;
- (BOOL)authorizationPasscodeEnabledOnDevice;
- (id)screenTimePasscodeStatusCheck;
- (id)linkedParentContainerProvider;
+ (id)log;
+ (BOOL)isAuthorizationPasscodeEnabledOnDevice;
+ (id)containerProviderWithContactStore:;
@end
