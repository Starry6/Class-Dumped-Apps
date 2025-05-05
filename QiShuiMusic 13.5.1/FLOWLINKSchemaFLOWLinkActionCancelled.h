@interface FLOWLINKSchemaFLOWLinkActionCancelled : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger cancellationInitiator;
@property (nonatomic) BOOL hasCancellationInitiator;
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
- (void)setCancellationInitiator:;
- (BOOL)hasCancellationInitiator;
- (void)setHasCancellationInitiator:;
- (void)deleteCancellationInitiator;
- (int)cancellationInitiator;
@end
