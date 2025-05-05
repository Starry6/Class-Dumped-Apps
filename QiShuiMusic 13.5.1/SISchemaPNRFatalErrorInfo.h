@interface SISchemaPNRFatalErrorInfo : SISchemaInstrumentationMessage
@property (nonatomic) NSString errorDomain;
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) NSString errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) NSData jsonData;
- (id)errorDomain;
- (BOOL)hasErrorCode;
- (id)errorCode;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setErrorDomain:;
- (BOOL)hasErrorDomain;
- (void)setHasErrorCode:;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (void)setHasErrorDomain:;
@end
