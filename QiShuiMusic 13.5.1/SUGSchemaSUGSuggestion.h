@interface SUGSchemaSUGSuggestion : SISchemaInstrumentationMessage
@property (nonatomic) NSString suggestionId;
@property (nonatomic) BOOL hasSuggestionId;
@property (nonatomic) SUGSchemaSUGSiriHelpSignal subscribedSignal;
@property (nonatomic) BOOL hasSubscribedSignal;
@property (nonatomic) NSInteger deliveryVehicle;
@property (nonatomic) BOOL hasDeliveryVehicle;
@property (nonatomic) NSInteger goal;
@property (nonatomic) BOOL hasGoal;
@property (nonatomic) I finalRank;
@property (nonatomic) BOOL hasFinalRank;
@property (nonatomic) double goalSpecificScore;
@property (nonatomic) BOOL hasGoalSpecificScore;
@property (nonatomic) double finalScore;
@property (nonatomic) BOOL hasFinalScore;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suggestionId;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setSuggestionId:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (int)goal;
- (void)setGoal:;
- (BOOL)hasSuggestionId;
- (void)deleteSuggestionId;
- (void)setHasSuggestionId:;
- (BOOL)hasSubscribedSignal;
- (void)deleteSubscribedSignal;
- (void)setDeliveryVehicle:;
- (BOOL)hasDeliveryVehicle;
- (void)setHasDeliveryVehicle:;
- (void)deleteDeliveryVehicle;
- (BOOL)hasGoal;
- (void)setHasGoal:;
- (void)deleteGoal;
- (void)setFinalRank:;
- (BOOL)hasFinalRank;
- (void)setHasFinalRank:;
- (void)deleteFinalRank;
- (void)setGoalSpecificScore:;
- (BOOL)hasGoalSpecificScore;
- (void)setHasGoalSpecificScore:;
- (void)deleteGoalSpecificScore;
- (void)setFinalScore:;
- (BOOL)hasFinalScore;
- (void)setHasFinalScore:;
- (void)deleteFinalScore;
- (id)subscribedSignal;
- (void)setSubscribedSignal:;
- (int)deliveryVehicle;
- (unsigned int)finalRank;
- (double)goalSpecificScore;
- (double)finalScore;
- (void)setHasSubscribedSignal:;
@end
