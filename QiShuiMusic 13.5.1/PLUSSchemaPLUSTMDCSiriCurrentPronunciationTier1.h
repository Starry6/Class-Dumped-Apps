@interface PLUSSchemaPLUSTMDCSiriCurrentPronunciationTier1 : SISchemaInstrumentationMessage
@property (nonatomic) NSString phonemes;
@property (nonatomic) BOOL hasPhonemes;
@property (nonatomic) NSInteger source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setHasSource:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (int)source;
- (BOOL)readFrom:;
- (BOOL)hasSource;
- (id)dictionaryRepresentation;
- (void)setSource:;
- (BOOL)isEqual:;
- (id)phonemes;
- (void)setPhonemes:;
- (void)deleteSource;
- (BOOL)hasPhonemes;
- (void)deletePhonemes;
- (void)setHasPhonemes:;
@end
