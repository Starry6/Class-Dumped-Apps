@interface FLOWSchemaFLOWHomeCommunicationSendOrReply : SISchemaInstrumentationMessage
@property (nonatomic) NSArray targetTypes;
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
- (void)clearTargetType;
- (void)deleteTargetType;
- (void)addTargetType:;
- (unsigned long long)targetTypeCount;
- (int)targetTypeAtIndex:;
- (id)targetTypes;
- (void)setTargetTypes:;
@end
