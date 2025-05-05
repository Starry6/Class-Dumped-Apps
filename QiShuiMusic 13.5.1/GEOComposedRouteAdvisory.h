@interface GEOComposedRouteAdvisory : NSObject
@property (nonatomic) <GEOServerFormattedString> title;
@property (nonatomic) GEOPBTransitArtwork artwork;
@property (nonatomic) BOOL isClickable;
@property (nonatomic) NSArray advisoryItems;
@property (nonatomic) NSArray analyticsMessageValues;
- (id)artwork;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)analyticsMessageValues;
- (id)advisoryItems;
- (id)initWithGeoAdvisoryNotice:incidents:;
- (id)initWithGeoAdvisoryNotice:transitIncidents:;
- (void)_commonInitWithAdvisoryNotice:artwork:;
- (BOOL)isClickable;
+ (BOOL)supportsSecureCoding;
+ (id)_fallbackAdvisoryArtwork;
@end
