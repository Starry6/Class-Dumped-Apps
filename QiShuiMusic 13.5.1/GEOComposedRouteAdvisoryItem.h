@interface GEOComposedRouteAdvisoryItem : NSObject
@property (nonatomic) <GEOServerFormattedString> title;
@property (nonatomic) <GEOServerFormattedString> subtitle;
@property (nonatomic) NSDate dateOfLastUpdate;
@property (nonatomic) <GEOServerFormattedString> dateOfLastUpdateDescription;
@property (nonatomic) NSArray details;
@property (nonatomic) <GEOServerFormattedString> attribution;
@property (nonatomic) GEOPBTransitArtwork artwork;
@property (nonatomic) BOOL isNonTransitIncident;
@property (nonatomic) NSArray analyticsMessageValues;
- (id)artwork;
- (id)initWithCoder:;
- (id)attribution;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)subtitle;
- (id)details;
- (id)copyWithZone:;
- (id)initWithAdvisoryItem:routeIncidents:fallbackIcon:;
- (id)initWithAdvisoryItem:transitIncidents:fallbackIcon:;
- (id)_detailsForIncident:;
- (id)dateOfLastUpdate;
- (id)dateOfLastUpdateDescription;
- (BOOL)isNonTransitIncident;
- (id)analyticsMessageValues;
+ (BOOL)supportsSecureCoding;
@end
