@interface GEOVLFLocalizationResults : PBCodable
@property (nonatomic) BOOL hasVlfCorrection;
@property (nonatomic) GEOVLFCorrection vlfCorrection;
@property (nonatomic) BOOL hasVlfFinalState;
@property (nonatomic) NSInteger vlfFinalState;
@property (nonatomic) NSMutableArray localizationDetails;
@property (nonatomic) BOOL hasPositionContextClassification;
@property (nonatomic) {GEOVLFPositionContextClassification=ddi{?=b1b1b1}} positionContextClassification;
- (void)readAll:;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)localizationDetails;
- (void)setLocalizationDetails:;
- (void)clearLocalizationDetails;
- (void)addLocalizationDetails:;
- (unsigned long long)localizationDetailsCount;
- (id)localizationDetailsAtIndex:;
- (id)positionContextClassification;
- (void)setPositionContextClassification:;
- (void)setHasPositionContextClassification:;
- (BOOL)hasPositionContextClassification;
- (BOOL)hasVlfCorrection;
- (id)vlfCorrection;
- (void)setVlfCorrection:;
- (int)vlfFinalState;
- (void)setVlfFinalState:;
- (void)setHasVlfFinalState:;
- (BOOL)hasVlfFinalState;
- (id)vlfFinalStateAsString:;
- (int)StringAsVlfFinalState:;
+ (BOOL)isValid:;
+ (Class)localizationDetailsType;
@end
