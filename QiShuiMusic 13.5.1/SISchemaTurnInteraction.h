@interface SISchemaTurnInteraction : SISchemaInstrumentationMessage
@property (nonatomic) NSString interactionId;
@property (nonatomic) BOOL hasInteractionId;
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
- (id)interactionId;
- (BOOL)hasInteractionId;
- (void)setInteractionId:;
- (void)deleteInteractionId;
- (void)setHasInteractionId:;
@end
