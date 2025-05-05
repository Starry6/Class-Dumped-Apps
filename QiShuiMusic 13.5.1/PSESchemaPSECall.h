@interface PSESchemaPSECall : SISchemaInstrumentationMessage
@property (nonatomic) double callDurationInSeconds;
@property (nonatomic) BOOL hasCallDurationInSeconds;
@property (nonatomic) BOOL hasUserInitiatedFollowup;
@property (nonatomic) BOOL hasHasUserInitiatedFollowup;
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
- (void)setCallDurationInSeconds:;
- (BOOL)hasCallDurationInSeconds;
- (void)setHasCallDurationInSeconds:;
- (void)deleteCallDurationInSeconds;
- (void)setHasUserInitiatedFollowup:;
- (BOOL)hasHasUserInitiatedFollowup;
- (void)setHasHasUserInitiatedFollowup:;
- (void)deleteHasUserInitiatedFollowup;
- (double)callDurationInSeconds;
- (BOOL)hasUserInitiatedFollowup;
@end
