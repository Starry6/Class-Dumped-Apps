@interface HALSchemaHALLocalFetchFailed : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger failureReason;
@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) NSData jsonData;
- (int)failureReason;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setFailureReason:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasFailureReason:;
- (BOOL)hasFailureReason;
- (void)deleteFailureReason;
@end
