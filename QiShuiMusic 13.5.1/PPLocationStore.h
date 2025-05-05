@interface PPLocationStore : NSObject
@property (nonatomic) NSString clientIdentifier;
- (id)rankedLocationsWithQuery:error:;
- (id)init;
- (id)locationRecordsWithQuery:error:;
- (BOOL)cloudSyncWithError:;
- (void)registerFeedback:clientIdentifier:completion:;
- (void)registerFeedback:completion:;
- (void).cxx_destruct;
- (BOOL)iterRankedLocationsWithQuery:error:block:;
- (BOOL)iterLocationRecordsWithQuery:error:block:;
- (id)forwardingTargetForSelector:;
- (BOOL)clearWithError:deletedCount:;
- (BOOL)donateLocations:source:contextualNamedEntities:algorithm:cloudSync:decayRate:error:;
+ (id)new;
+ (id)defaultStore;
+ (id)placemarkWithLocation:name:thoroughfare:subthoroughFare:locality:subLocality:administrativeArea:subAdministrativeArea:postalCode:countryCode:country:inlandWater:ocean:areasOfInterest:;
+ (id)describeLocationConsumer:;
+ (id)_mergedThoroughfareForThorughfare:subThoroughfare:subPremises:;
+ (id)placemarkWithName:clLocation:;
+ (id)placemarkWithLatitudeDegrees:longitudeDegrees:name:thoroughfare:subthoroughFare:locality:subLocality:administrativeArea:subAdministrativeArea:postalCode:countryCode:country:inlandWater:ocean:areasOfInterest:;
@end
