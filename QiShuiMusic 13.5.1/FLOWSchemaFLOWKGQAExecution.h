@interface FLOWSchemaFLOWKGQAExecution : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger kgQAUsecase;
@property (nonatomic) BOOL hasKgQAUsecase;
@property (nonatomic) NSArray attributes;
@property (nonatomic) BOOL isDisputedResponse;
@property (nonatomic) BOOL hasIsDisputedResponse;
@property (nonatomic) NSString nlgKey;
@property (nonatomic) BOOL hasNlgKey;
@property (nonatomic) BOOL isWebExtractedFact;
@property (nonatomic) BOOL hasIsWebExtractedFact;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setAttributes:;
- (id)attributes;
- (unsigned long long)attributesCount;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)clearAttributes;
- (void)addAttributes:;
- (id)attributesAtIndex:;
- (void)setKgQAUsecase:;
- (BOOL)hasKgQAUsecase;
- (void)setHasKgQAUsecase:;
- (void)deleteKgQAUsecase;
- (void)deleteAttributes;
- (void)setIsDisputedResponse:;
- (BOOL)hasIsDisputedResponse;
- (void)setHasIsDisputedResponse:;
- (void)deleteIsDisputedResponse;
- (BOOL)hasNlgKey;
- (void)deleteNlgKey;
- (void)setIsWebExtractedFact:;
- (BOOL)hasIsWebExtractedFact;
- (void)setHasIsWebExtractedFact:;
- (void)deleteIsWebExtractedFact;
- (int)kgQAUsecase;
- (BOOL)isDisputedResponse;
- (id)nlgKey;
- (void)setNlgKey:;
- (BOOL)isWebExtractedFact;
- (void)setHasNlgKey:;
@end
