@interface SCSchemaSCSetUndoArgs : SISchemaInstrumentationMessage
@property (nonatomic) NSString directInvocationId;
@property (nonatomic) BOOL hasDirectInvocationId;
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
- (BOOL)hasDirectInvocationId;
- (void)deleteDirectInvocationId;
- (id)directInvocationId;
- (void)setDirectInvocationId:;
- (void)setHasDirectInvocationId:;
@end
