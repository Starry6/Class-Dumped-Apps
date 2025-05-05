@interface CTCellularPlanCarrierItem : NSObject
@property (nonatomic) BOOL applePaySupported;
@property (nonatomic) NSString name;
@property (nonatomic) NSString websheetURL;
@property (nonatomic) NSString planPurchaseEndpointType;
@property (nonatomic) NSString warningText;
@property (nonatomic) NSString addOnWebsheetURL;
@property (nonatomic) NSString addOnEndpointType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)copyWithZone:;
- (id)warningText;
- (id)initWithName:url:applePaySupported:responseType:warningText:addOnUrl:addOnEndpointType:;
- (id)websheetURL;
- (BOOL)applePaySupported;
- (void)setApplePaySupported:;
- (id)planPurchaseEndpointType;
- (id)addOnWebsheetURL;
- (id)addOnEndpointType;
+ (BOOL)supportsSecureCoding;
@end
