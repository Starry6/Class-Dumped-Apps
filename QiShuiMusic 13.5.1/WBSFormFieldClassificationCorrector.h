@interface WBSFormFieldClassificationCorrector : NSObject
@property (nonatomic) <WBSFormFieldClassificationCorrectorDelegate> delegate;
@property (nonatomic) NSString domain;
@property (nonatomic) WBSFormMetadata formMetadata;
@property (nonatomic) NSDictionary formValues;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)domain;
- (id)formMetadata;
- (id)initWithDomain:formMetadata:formValues:uniqueIDsOfControlsThatWereAutoFilled:;
- (void)processCorrections;
- (id)_classificationCorrectionsForControlWithMetadata:wasIdentifiedAsAddressBookField:;
- (id)formValues;
@end
