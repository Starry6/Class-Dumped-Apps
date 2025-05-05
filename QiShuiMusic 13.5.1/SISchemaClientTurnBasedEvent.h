@interface SISchemaClientTurnBasedEvent : PBCodable
@property (nonatomic) BOOL hasTurnContext;
@property (nonatomic) SISchemaClientTurnContext turnContext;
@property (nonatomic) BOOL hasEvent;
@property (nonatomic) SISchemaClientAnyEvent event;
- (BOOL)hasEvent;
- (void)setEvent:;
- (id)event;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)si_dictionaryRepresentation;
- (BOOL)hasTurnContext;
- (id)turnContext;
- (void)setTurnContext:;
@end
