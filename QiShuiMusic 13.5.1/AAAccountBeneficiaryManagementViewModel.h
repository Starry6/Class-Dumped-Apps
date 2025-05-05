@interface AAAccountBeneficiaryManagementViewModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString myBeneficiariesGroupTitle;
@property (nonatomic) NSString myBeneficiariesAdd;
@property (nonatomic) NSString myBeneficiariesGroupFooter;
@property (nonatomic) NSString beneficiaryForGroupTitle;
@property (nonatomic) NSString learnMore;
@property (nonatomic) NSURL learnMoreURL;
@property (nonatomic) NSString noBenefactorFooter;
- (id)title;
- (id)learnMoreURL;
- (id)learnMore;
- (id)myBeneficiariesGroupTitle;
- (id)myBeneficiariesAdd;
- (id)myBeneficiariesGroupFooter;
- (id)beneficiaryForGroupTitle;
- (id)noBenefactorFooter;
@end
