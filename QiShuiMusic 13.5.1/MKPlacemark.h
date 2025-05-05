@interface MKPlacemark : CLPlacemark
@property (nonatomic) NSString countryCode;
@property (nonatomic) {CLLocationCoordinate2D=dd} coordinate;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)thoroughfare;
- (id)countryCode;
- (id)initWithCoordinate:;
- (id)title;
- (id)coordinate;
- (id)initWithCoordinate:addressDictionary:;
- (id)initWithCoordinate:postalAddress:;
- (id)mkPostalAddressDictionary;
@end
