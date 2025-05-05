@interface SISchemaTVRemoteInvocationContext : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger remoteType;
@property (nonatomic) BOOL hasRemoteType;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (int)remoteType;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (void)setRemoteType:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasRemoteType;
- (void)setHasRemoteType:;
- (void)deleteRemoteType;
@end
