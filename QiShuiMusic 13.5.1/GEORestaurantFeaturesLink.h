@interface GEORestaurantFeaturesLink : NSObject
@property (nonatomic) GEOPDRestaurantReservationLink restaurantReservationLink;
@property (nonatomic) BOOL hasFeatures;
@property (nonatomic) NSArray featureProviders;
@property (nonatomic) NSArray featureTypes;
- (void).cxx_destruct;
- (id)initWithRestaurantReservationLink:attributionMap:;
- (BOOL)hasFeatures;
- (id)featureProviders;
- (id)applicationsForVendorID:;
- (id)displayNameForVendorID:;
- (unsigned long long)extensionModeForVendorID:;
- (id)featureTypes;
- (id)restaurantReservationLink;
- (void)setRestaurantReservationLink:;
@end
