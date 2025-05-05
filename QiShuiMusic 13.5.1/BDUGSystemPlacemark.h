@interface BDUGSystemPlacemark : BDUGBasePlacemark
@property (nonatomic) NSString detailedAddress;
@property (nonatomic) NSString postalCode;
@property (nonatomic) NSString ISOcountryCode;
@property (nonatomic) NSString inlandWater;
@property (nonatomic) NSString ocean;
@property (nonatomic) NSArray areasOfInterest;
- (id)detailedAddress;
- (void)setDetailedAddress:;
- (id)postalCode;
- (id)areasOfInterest;
- (id)initWithCoder:;
- (void)setPostalCode:;
- (id)ocean;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)inlandWater;
- (id)copyWithZone:;
- (void)setInlandWater:;
- (void)setOcean:;
- (id)ISOcountryCode;
- (void)setAreasOfInterest:;
- (void)setISOcountryCode:;
- (id)toJSON;
+ (BOOL)supportsSecureCoding;
@end
