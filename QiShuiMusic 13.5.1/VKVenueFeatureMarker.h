@interface VKVenueFeatureMarker : VKMarker
@property (nonatomic) Q businessID;
@property (nonatomic) GEOMapItemIdentifier mapIdentifier;
@property (nonatomic) NSArray buildings;
- (id)shortName;
- (id)mapIdentifier;
- (unsigned long long)businessID;
- (id)buildings;
- (id)initWithVenue:localize:;
- (id)name;
- (id)venueFeatureMarker;
@end
