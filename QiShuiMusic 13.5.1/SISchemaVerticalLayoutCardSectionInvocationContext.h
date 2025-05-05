@interface SISchemaVerticalLayoutCardSectionInvocationContext : SISchemaInstrumentationMessage
@property (nonatomic) NSString resultIdentifier;
@property (nonatomic) BOOL hasResultIdentifier;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)resultIdentifier;
- (void)setResultIdentifier:;
- (BOOL)hasResultIdentifier;
- (void)deleteResultIdentifier;
- (void)setHasResultIdentifier:;
@end
