@interface GeoIpLookupResult : NSObject
@property (nonatomic) NSString ipAddress;
@property (nonatomic) {?=dd} latLong;
@property (nonatomic) NSString countryCode;
@property (nonatomic) NSString timeZone;
- (id)countryCode;
- (void).cxx_destruct;
- (id)timeZone;
- (id)initWithGEOPDPlaceResponse:;
- (id)ipAddress;
- (id)latLong;
@end
