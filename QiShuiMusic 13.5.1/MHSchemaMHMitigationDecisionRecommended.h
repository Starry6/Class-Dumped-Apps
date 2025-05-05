@interface MHSchemaMHMitigationDecisionRecommended : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isMitigationRecommended;
@property (nonatomic) BOOL hasIsMitigationRecommended;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setIsMitigationRecommended:;
- (BOOL)hasIsMitigationRecommended;
- (void)setHasIsMitigationRecommended:;
- (void)deleteIsMitigationRecommended;
- (BOOL)isMitigationRecommended;
@end
