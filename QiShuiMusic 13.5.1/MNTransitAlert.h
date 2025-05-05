@interface MNTransitAlert : NSObject
@property (nonatomic) MNActiveRouteInfo currentRouteInfo;
@property (nonatomic) <GEOServerFormattedString> command;
@property (nonatomic) <GEOServerFormattedString> detail;
@property (nonatomic) GEOPBTransitArtwork artwork;
@property (nonatomic) NSInteger maneuverType;
@property (nonatomic) Q stopIndex;
@property (nonatomic) Q stepIndex;
- (id)artwork;
- (id)initWithCoder:;
- (id)detail;
- (void)encodeWithCoder:;
- (id)command;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)stepIndex;
- (unsigned long long)stopIndex;
- (int)maneuverType;
- (id)initWithTransitBanner:transitStep:activeRoute:;
- (id)currentRouteInfo;
+ (BOOL)supportsSecureCoding;
@end
