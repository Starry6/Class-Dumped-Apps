@interface NLXSchemaCDMSingleServiceSetupAttemptStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger serviceType;
@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) I retryNumber;
@property (nonatomic) BOOL hasRetryNumber;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (int)serviceType;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setServiceType:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)hasServiceType;
- (void)setHasServiceType:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteServiceType;
- (void)setRetryNumber:;
- (BOOL)hasRetryNumber;
- (void)setHasRetryNumber:;
- (void)deleteRetryNumber;
- (unsigned int)retryNumber;
@end
