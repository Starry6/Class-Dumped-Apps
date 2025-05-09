@interface GEOLPRLicensePlateStructure : PBCodable
@property (nonatomic) BOOL hasSupportedPlateAlphabetLetters;
@property (nonatomic) NSString supportedPlateAlphabetLetters;
@property (nonatomic) BOOL hasSupportedPlateNumerics;
@property (nonatomic) NSString supportedPlateNumerics;
- (id)supportedAlphabeticCharacterSet;
- (id)supportedNumericCharacterSet;
- (void)readAll:;
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
- (BOOL)hasSupportedPlateAlphabetLetters;
- (id)supportedPlateAlphabetLetters;
- (void)setSupportedPlateAlphabetLetters:;
- (BOOL)hasSupportedPlateNumerics;
- (id)supportedPlateNumerics;
- (void)setSupportedPlateNumerics:;
+ (BOOL)isValid:;
@end
