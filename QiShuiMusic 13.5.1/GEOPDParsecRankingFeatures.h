@interface GEOPDParsecRankingFeatures : PBCodable
@property (nonatomic) BOOL hasExpectedCtr;
@property (nonatomic) double expectedCtr;
@property (nonatomic) BOOL hasDistanceFromDeviceLocation;
@property (nonatomic) double distanceFromDeviceLocation;
@property (nonatomic) BOOL hasDistanceFromContainment;
@property (nonatomic) double distanceFromContainment;
@property (nonatomic) BOOL hasIsSpellCorrected;
@property (nonatomic) BOOL isSpellCorrected;
@property (nonatomic) BOOL hasIsRecallMismatch;
@property (nonatomic) BOOL isRecallMismatch;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (double)expectedCtr;
- (void)setExpectedCtr:;
- (void)setHasExpectedCtr:;
- (BOOL)hasExpectedCtr;
- (double)distanceFromDeviceLocation;
- (void)setDistanceFromDeviceLocation:;
- (void)setHasDistanceFromDeviceLocation:;
- (BOOL)hasDistanceFromDeviceLocation;
- (double)distanceFromContainment;
- (void)setDistanceFromContainment:;
- (void)setHasDistanceFromContainment:;
- (BOOL)hasDistanceFromContainment;
- (BOOL)isSpellCorrected;
- (void)setIsSpellCorrected:;
- (void)setHasIsSpellCorrected:;
- (BOOL)hasIsSpellCorrected;
- (BOOL)isRecallMismatch;
- (void)setIsRecallMismatch:;
- (void)setHasIsRecallMismatch:;
- (BOOL)hasIsRecallMismatch;
+ (BOOL)isValid:;
@end
