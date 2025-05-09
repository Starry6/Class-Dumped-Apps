@interface GEOLogMsgStateNavigation : PBCodable
@property (nonatomic) BOOL hasLineType;
@property (nonatomic) NSInteger lineType;
@property (nonatomic) BOOL hasNavState;
@property (nonatomic) NSInteger navState;
@property (nonatomic) BOOL hasDistanceToDestination;
@property (nonatomic) double distanceToDestination;
@property (nonatomic) BOOL hasNavCameraState;
@property (nonatomic) GEONavCameraState navCameraState;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setLineType:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setDistanceToDestination:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)lineType;
- (void)setHasLineType:;
- (BOOL)hasLineType;
- (id)lineTypeAsString:;
- (int)StringAsLineType:;
- (int)navState;
- (void)setNavState:;
- (void)setHasNavState:;
- (BOOL)hasNavState;
- (id)navStateAsString:;
- (int)StringAsNavState:;
- (double)distanceToDestination;
- (void)setHasDistanceToDestination:;
- (BOOL)hasDistanceToDestination;
- (BOOL)hasNavCameraState;
- (id)navCameraState;
- (void)setNavCameraState:;
+ (BOOL)isValid:;
@end
