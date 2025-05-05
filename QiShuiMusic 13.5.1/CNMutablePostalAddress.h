@interface CNMutablePostalAddress : CNPostalAddress
@property (nonatomic) NSString formattedAddress;
@property (nonatomic) NSString street;
@property (nonatomic) NSString subLocality;
@property (nonatomic) NSString city;
@property (nonatomic) NSString subAdministrativeArea;
@property (nonatomic) NSString state;
@property (nonatomic) NSString postalCode;
@property (nonatomic) NSString country;
@property (nonatomic) NSString ISOCountryCode;
- (id)freeze;
- (id)copyWithZone:;
@end
