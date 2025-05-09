@interface INFERENCESchemaINFERENCEResolutionQueryInfoGenerated : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID originalResolutionContextId;
@property (nonatomic) BOOL hasOriginalResolutionContextId;
@property (nonatomic) SISchemaUUID queryId;
@property (nonatomic) BOOL hasQueryId;
@property (nonatomic) NSInteger resolutionState;
@property (nonatomic) BOOL hasResolutionState;
@property (nonatomic) NSInteger forcePromptType;
@property (nonatomic) BOOL hasForcePromptType;
@property (nonatomic) NSString recommenderModelVersion;
@property (nonatomic) BOOL hasRecommenderModelVersion;
@property (nonatomic) NSArray anonymizedRecommendedEntityIdentifiers;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setQueryId:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (id)queryId;
- (BOOL)isEqual:;
- (BOOL)hasQueryId;
- (void)setResolutionState:;
- (BOOL)hasResolutionState;
- (void)setHasResolutionState:;
- (void)deleteResolutionState;
- (int)resolutionState;
- (BOOL)hasOriginalResolutionContextId;
- (void)deleteOriginalResolutionContextId;
- (void)deleteQueryId;
- (id)originalResolutionContextId;
- (void)setOriginalResolutionContextId:;
- (void)setHasOriginalResolutionContextId:;
- (void)setHasQueryId:;
- (void)setForcePromptType:;
- (BOOL)hasForcePromptType;
- (void)setHasForcePromptType:;
- (void)deleteForcePromptType;
- (BOOL)hasRecommenderModelVersion;
- (void)deleteRecommenderModelVersion;
- (void)clearAnonymizedRecommendedEntityIdentifier;
- (void)deleteAnonymizedRecommendedEntityIdentifier;
- (void)addAnonymizedRecommendedEntityIdentifier:;
- (unsigned long long)anonymizedRecommendedEntityIdentifierCount;
- (id)anonymizedRecommendedEntityIdentifierAtIndex:;
- (int)forcePromptType;
- (id)recommenderModelVersion;
- (void)setRecommenderModelVersion:;
- (id)anonymizedRecommendedEntityIdentifiers;
- (void)setAnonymizedRecommendedEntityIdentifiers:;
- (void)setHasRecommenderModelVersion:;
@end
