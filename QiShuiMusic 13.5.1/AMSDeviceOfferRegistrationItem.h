@interface AMSDeviceOfferRegistrationItem : NSObject
@property (nonatomic) NSString model;
@property (nonatomic) NSString serialNumber;
@property (nonatomic) NSData validationData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serialNumber;
- (id)model;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithDatabaseEntry:;
- (id)serializeToDictionary;
- (id)initWithSerialNumber:model:validationData:;
- (BOOL)isEqualToRegistrationItem:;
- (id)validationData;
@end
