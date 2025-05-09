@interface GEORoadAccessPoint : PBCodable
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) GEOLatLng location;
@property (nonatomic) BOOL hasIsApproximate;
@property (nonatomic) BOOL isApproximate;
@property (nonatomic) BOOL hasCyclingDirection;
@property (nonatomic) NSInteger cyclingDirection;
@property (nonatomic) BOOL hasDrivingDirection;
@property (nonatomic) NSInteger drivingDirection;
@property (nonatomic) BOOL hasTransitDirection;
@property (nonatomic) NSInteger transitDirection;
@property (nonatomic) BOOL hasWalkingDirection;
@property (nonatomic) NSInteger walkingDirection;
@property (nonatomic) BOOL hasSignificance;
@property (nonatomic) I significance;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) NSInteger source;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)transitDirectionAsString:;
- (id)unknownFields;
- (BOOL)hasGreenTeaWithValue:;
- (int)drivingDirection;
- (int)StringAsTransitDirection:;
- (int)StringAsDrivingDirection:;
- (id)initWithJSON:;
- (BOOL)hasLocation;
- (BOOL)isApproximate;
- (id)jsonRepresentation;
- (void)setTransitDirection:;
- (void)setHasSignificance:;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (id)drivingDirectionAsString:;
- (int)walkingDirection;
- (void)setHasSource:;
- (BOOL)hasSignificance;
- (unsigned long long)hash;
- (void)setWalkingDirection:;
- (int)transitDirection;
- (void)copyTo:;
- (id)location;
- (void)mergeFrom:;
- (int)StringAsSource:;
- (int)StringAsCyclingDirection:;
- (int)StringAsWalkingDirection:;
- (id)walkingDirectionAsString:;
- (BOOL)hasIsApproximate;
- (BOOL)hasWalkingDirection;
- (void)setLocation:;
- (void).cxx_destruct;
- (int)source;
- (void)setHasCyclingDirection:;
- (void)setCyclingDirection:;
- (void)setSignificance:;
- (BOOL)readFrom:;
- (id)sourceAsString:;
- (void)setHasTransitDirection:;
- (void)setDrivingDirection:;
- (id)description;
- (int)cyclingDirection;
- (BOOL)hasSource;
- (unsigned int)significance;
- (void)setIsApproximate:;
- (BOOL)hasCyclingDirection;
- (id)dictionaryRepresentation;
- (id)cyclingDirectionAsString:;
- (void)setHasIsApproximate:;
- (BOOL)hasTransitDirection;
- (BOOL)hasDrivingDirection;
- (void)setHasWalkingDirection:;
- (void)setSource:;
- (BOOL)isEqual:;
- (void)setHasDrivingDirection:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
