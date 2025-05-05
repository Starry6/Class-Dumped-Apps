@interface GEOComposedTrafficSignal : GEOComposedEnrouteNotice
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasCountryCode;
@property (nonatomic) I countryCode;
- (BOOL)hasCountryCode;
- (unsigned int)countryCode;
- (id)position;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEnrouteNotice:enrouteNoticeIndex:legIndex:trafficSignal:onRoute:;
+ (BOOL)supportsSecureCoding;
@end
