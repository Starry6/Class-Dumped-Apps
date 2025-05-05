@interface GEOVLFARFailureTypes : PBCodable
@property (nonatomic) BOOL hasArWalkingNoLabels;
@property (nonatomic) BOOL arWalkingNoLabels;
@property (nonatomic) BOOL hasArWalkingUndulationFailure;
@property (nonatomic) BOOL arWalkingUndulationFailure;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)arWalkingNoLabels;
- (void)setArWalkingNoLabels:;
- (void)setHasArWalkingNoLabels:;
- (BOOL)hasArWalkingNoLabels;
- (BOOL)arWalkingUndulationFailure;
- (void)setArWalkingUndulationFailure:;
- (void)setHasArWalkingUndulationFailure:;
- (BOOL)hasArWalkingUndulationFailure;
+ (BOOL)isValid:;
@end
