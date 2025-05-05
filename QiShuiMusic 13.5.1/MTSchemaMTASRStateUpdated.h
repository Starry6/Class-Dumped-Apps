@interface MTSchemaMTASRStateUpdated : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger asrState;
@property (nonatomic) BOOL hasAsrState;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setAsrState:;
- (BOOL)hasAsrState;
- (void)setHasAsrState:;
- (void)deleteAsrState;
- (int)asrState;
@end
