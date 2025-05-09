@interface AAAccountRecoveryManagementViewModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString details;
@property (nonatomic) NSString detailsForIneligibleAccount;
@property (nonatomic) NSString learnMore;
@property (nonatomic) NSURL learnMoreURL;
@property (nonatomic) NSString appleDataRecoveryLabel;
@property (nonatomic) NSString myRecoveryContactsGroupTitle;
@property (nonatomic) NSString myRecoveryContactsAdd;
@property (nonatomic) NSString myRecoveryContactsFooter;
@property (nonatomic) NSString myRecoveryContactsFooterForIneligibleAccount;
@property (nonatomic) NSURL footerLearnMoreURL;
@property (nonatomic) NSString recoveryContactForGroupTitle;
@property (nonatomic) NSString recoveryKeyLabel;
@property (nonatomic) NSString recoveryKeyDetails;
- (id)title;
- (id)details;
- (id)learnMoreURL;
- (id)learnMore;
- (id)detailsForIneligibleAccount;
- (id)appleDataRecoveryLabel;
- (id)myRecoveryContactsGroupTitle;
- (id)myRecoveryContactsAdd;
- (id)myRecoveryContactsFooter;
- (id)myRecoveryContactsFooterForIneligibleAccount;
- (id)footerLearnMoreURL;
- (id)recoveryContactForGroupTitle;
- (id)recoveryKeyLabel;
- (id)recoveryKeyDetails;
- (id)recoveryKeyStatusText:;
@end
