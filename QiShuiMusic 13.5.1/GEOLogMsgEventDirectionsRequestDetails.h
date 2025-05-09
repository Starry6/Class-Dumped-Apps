@interface GEOLogMsgEventDirectionsRequestDetails : PBCodable
@property (nonatomic) BOOL hasNavStarted;
@property (nonatomic) BOOL navStarted;
@property (nonatomic) BOOL hasPurpose;
@property (nonatomic) NSInteger purpose;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) NSInteger origin;
@property (nonatomic) BOOL hasDestination;
@property (nonatomic) NSInteger destination;
- (void)readAll:;
- (void)setPurpose:;
- (void)setDestination:;
- (void)setOrigin:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (int)purpose;
- (int)destination;
- (unsigned long long)hash;
- (int)origin;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasOrigin;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasOrigin:;
- (id)originAsString:;
- (int)StringAsOrigin:;
- (BOOL)hasDestination;
- (void)setHasPurpose:;
- (BOOL)hasPurpose;
- (id)purposeAsString:;
- (int)StringAsPurpose:;
- (BOOL)navStarted;
- (void)setNavStarted:;
- (void)setHasNavStarted:;
- (BOOL)hasNavStarted;
- (void)setHasDestination:;
- (id)destinationAsString:;
- (int)StringAsDestination:;
+ (BOOL)isValid:;
@end
