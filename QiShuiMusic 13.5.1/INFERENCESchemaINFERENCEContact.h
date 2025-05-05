@interface INFERENCESchemaINFERENCEContact : SISchemaInstrumentationMessage
@property (nonatomic) NSString anonymizedContactIdentifier;
@property (nonatomic) BOOL hasAnonymizedContactIdentifier;
@property (nonatomic) NSArray anonymizedHandleValues;
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
- (BOOL)hasAnonymizedContactIdentifier;
- (void)deleteAnonymizedContactIdentifier;
- (void)clearAnonymizedHandleValues;
- (void)deleteAnonymizedHandleValues;
- (void)addAnonymizedHandleValues:;
- (unsigned long long)anonymizedHandleValuesCount;
- (id)anonymizedHandleValuesAtIndex:;
- (id)anonymizedContactIdentifier;
- (void)setAnonymizedContactIdentifier:;
- (id)anonymizedHandleValues;
- (void)setAnonymizedHandleValues:;
- (void)setHasAnonymizedContactIdentifier:;
@end
