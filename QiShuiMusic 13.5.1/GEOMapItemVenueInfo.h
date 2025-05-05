@interface GEOMapItemVenueInfo : NSObject
@property (nonatomic) <GEOVenueIdentifier> venueIdentifier;
@property (nonatomic) NSInteger venueFeatureType;
@property (nonatomic) NSArray filters;
@property (nonatomic) GEOMapItemParentVenue parent;
@property (nonatomic) <GEOMapItemVenueContents> contents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filters;
- (id)init;
- (id)contents;
- (id)venueIdentifier;
- (void).cxx_destruct;
- (id)parent;
- (int)venueFeatureType;
- (id)initWithIdentifier:featureType:filters:parent:contents:;
- (id)initWithVenueInfo:;
- (id)_filtersFromVenueInfo:;
@end
