@interface NETSchemaNETSessionConnectionHttpHeaderCreated : SISchemaInstrumentationMessage
@property (nonatomic) NSString userAgent;
@property (nonatomic) BOOL hasUserAgent;
@property (nonatomic) NSString aceHost;
@property (nonatomic) BOOL hasAceHost;
@property (nonatomic) NSData jsonData;
- (id)userAgent;
- (void)setUserAgent:;
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
- (id)aceHost;
- (void)setAceHost:;
- (BOOL)hasUserAgent;
- (void)deleteUserAgent;
- (BOOL)hasAceHost;
- (void)deleteAceHost;
- (void)setHasUserAgent:;
- (void)setHasAceHost:;
@end
