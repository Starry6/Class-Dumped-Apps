@interface GEOComposedRouteAnnotation : GEOComposedEnrouteNotice
@property (nonatomic) GEOPBTransitArtwork artwork;
@property (nonatomic) GEOMiniCard infoCard;
- (id)position;
- (id)artwork;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)infoCard;
- (id)initWithEnrouteNotice:enrouteNoticeIndex:legIndex:annotation:onRoute:;
+ (BOOL)supportsSecureCoding;
@end
