@interface GEORouteRestrictionZoneID : NSObject
@property (nonatomic) Q identifier;
@property (nonatomic) Q version;
@property (nonatomic) q restrictionType;
- (id)init;
- (unsigned long long)version;
- (unsigned long long)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)restrictionType;
- (id)initWithGeoRestrictedZoneId:;
+ (BOOL)supportsSecureCoding;
@end
