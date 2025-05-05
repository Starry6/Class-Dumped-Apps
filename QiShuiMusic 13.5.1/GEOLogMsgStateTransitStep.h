@interface GEOLogMsgStateTransitStep : PBCodable
@property (nonatomic) BOOL hasCurrentStep;
@property (nonatomic) I currentStep;
- (void)readAll:;
- (unsigned int)currentStep;
- (void)setCurrentStep:;
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
- (void)setHasCurrentStep:;
- (BOOL)hasCurrentStep;
+ (BOOL)isValid:;
@end
