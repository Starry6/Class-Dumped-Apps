@interface IDSRegistrationPhoneNumberValidationFinishedMetric : NSObject
@property (nonatomic) NSString guid;
@property (nonatomic) I registrationError;
@property (nonatomic) NSNumber validationDuration;
@property (nonatomic) NSNumber numberOfSMSSent;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned int)registrationError;
- (void).cxx_destruct;
- (id)guid;
- (id)name;
- (id)dictionaryRepresentation;
- (id)initWithGuid:registrationError:validationDuration:numberOfSMSSent:;
- (id)validationDuration;
- (id)numberOfSMSSent;
@end
