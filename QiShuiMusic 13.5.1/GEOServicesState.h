@interface GEOServicesState : PBCodable
@property (nonatomic) BOOL hasBogusFieldForTestingPurposes;
@property (nonatomic) NSString bogusFieldForTestingPurposes;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
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
- (BOOL)hasBogusFieldForTestingPurposes;
- (id)bogusFieldForTestingPurposes;
- (void)setBogusFieldForTestingPurposes:;
+ (BOOL)isValid:;
@end
