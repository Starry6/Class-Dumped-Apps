@interface ASRSchemaASRPreheatEnded : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) NSData jsonData;
- (void)setStatus:;
- (BOOL)hasStatus;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setHasStatus:;
- (BOOL)readFrom:;
- (int)status;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteStatus;
@end
