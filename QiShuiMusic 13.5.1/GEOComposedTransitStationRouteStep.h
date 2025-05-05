@interface GEOComposedTransitStationRouteStep : GEOComposedTransitRouteStep
@property (nonatomic) GEOPBTransitAccessPoint accessPoint;
@property (nonatomic) I expectedTime;
@property (nonatomic) GEOTransitTransferInfo transitTransfer;
@property (nonatomic) BOOL isArrivalUncertain;
@property (nonatomic) NSString exitSign;
@property (nonatomic) BOOL displayStop;
@property (nonatomic) BOOL hasDisplayStop;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)displayStop;
- (BOOL)hasDisplayStop;
- (id)accessPoint;
- (unsigned int)expectedTime;
- (id)startGeoCoordinate;
- (id)endGeoCoordinate;
- (id)initWithComposedRoute:decoderData:step:stepIndex:duration:pointRange:;
- (id)exitSign;
- (id)transitTransfer;
- (BOOL)isArrivalUncertain;
+ (BOOL)supportsSecureCoding;
@end
