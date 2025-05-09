@interface NETSchemaNETNetworkConnectionStateReadySnapshotCaptured : SISchemaInstrumentationMessage
@property (nonatomic) NSString connectionInfo;
@property (nonatomic) BOOL hasConnectionInfo;
@property (nonatomic) I connectionEstablishmentPreviousAttemptCount;
@property (nonatomic) BOOL hasConnectionEstablishmentPreviousAttemptCount;
@property (nonatomic) I connectionEstablishmentAttemptDelay;
@property (nonatomic) BOOL hasConnectionEstablishmentAttemptDelay;
@property (nonatomic) NSData jsonData;
- (id)connectionInfo;
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
- (void)setConnectionInfo:;
- (BOOL)hasConnectionInfo;
- (void)deleteConnectionInfo;
- (void)setHasConnectionInfo:;
- (void)setConnectionEstablishmentPreviousAttemptCount:;
- (BOOL)hasConnectionEstablishmentPreviousAttemptCount;
- (void)setHasConnectionEstablishmentPreviousAttemptCount:;
- (void)deleteConnectionEstablishmentPreviousAttemptCount;
- (void)setConnectionEstablishmentAttemptDelay:;
- (BOOL)hasConnectionEstablishmentAttemptDelay;
- (void)setHasConnectionEstablishmentAttemptDelay:;
- (void)deleteConnectionEstablishmentAttemptDelay;
- (unsigned int)connectionEstablishmentPreviousAttemptCount;
- (unsigned int)connectionEstablishmentAttemptDelay;
@end
