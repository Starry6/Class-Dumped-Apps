@interface SGPostalAddress : SGLabeledObject
@property (nonatomic) NSString address;
@property (nonatomic) NSString rawAddress;
@property (nonatomic) SGPostalAddressComponents components;
- (id)components;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)address;
- (BOOL)isEqual:;
- (BOOL)isEqualToPostalAddress:;
- (id)rawAddress;
- (id)initWithAddress:components:label:extractionInfo:recordId:;
+ (BOOL)supportsSecureCoding;
+ (id)postalAddress:components:label:extractionInfo:recordId:;
+ (id)postalAddress:components:label:extractionType:recordId:origin:;
+ (id)postalAddress:components:label:extractionType:recordId:;
@end
