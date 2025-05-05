@interface INRentalCar : NSObject
@property (nonatomic) NSString rentalCompanyName;
@property (nonatomic) NSString type;
@property (nonatomic) NSString make;
@property (nonatomic) NSString model;
@property (nonatomic) NSString rentalCarDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)model;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)type;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)make;
- (id)rentalCarDescription;
- (id)rentalCompanyName;
- (id)initWithRentalCompanyName:type:make:model:rentalCarDescription:;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
