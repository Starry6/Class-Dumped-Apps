@interface AMSDeviceOfferRegistrationGroup : NSObject
@property (nonatomic) NSArray registrationItems;
@property (nonatomic) Q validationOptions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithDatabaseEntry:;
- (id)serializeToDictionary;
- (id)initWithRegistrationItems:;
- (id)_initWithRegistrationItems:validationOptions:;
- (BOOL)isEqualToRegistrationGroup:;
- (BOOL)isModifiedVersionOfGroup:;
- (BOOL)_serialsMatchSerialsFromGroup:;
- (id)registrationItems;
- (unsigned long long)validationOptions;
- (void)setValidationOptions:;
@end
