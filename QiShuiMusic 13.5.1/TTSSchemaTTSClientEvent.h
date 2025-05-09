@interface TTSSchemaTTSClientEvent : SISchemaTopLevelUnionType
@property (nonatomic) SISchemaInstrumentationMessage innerEvent;
@property (nonatomic) TTSSchemaTTSClientEventMetadata eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (nonatomic) TTSSchemaTTSClientSpeechContext speechContext;
@property (nonatomic) BOOL hasSpeechContext;
@property (nonatomic) TTSSchemaTTSRequestReceived requestReceived;
@property (nonatomic) BOOL hasRequestReceived;
@property (nonatomic) TTSSchemaTTSRequestReceivedTier1 requestReceivedTier1;
@property (nonatomic) BOOL hasRequestReceivedTier1;
@property (nonatomic) TTSSchemaTTSVoiceFallbackOccurred voiceFallbackOccurred;
@property (nonatomic) BOOL hasVoiceFallbackOccurred;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q whichEvent_Type;
- (int)componentName;
- (id)qualifiedMessageName;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (unsigned long long)whichEvent_Type;
- (id)eventMetadata;
- (void)setEventMetadata:;
- (void)setSpeechContext:;
- (void)setVoiceFallbackOccurred:;
- (void)setRequestReceivedTier1:;
- (void)setRequestReceived:;
- (BOOL)hasEventMetadata;
- (id)innerEvent;
- (id)getComponentId;
- (void)deleteEventMetadata;
- (void)setHasEventMetadata:;
- (id)requestReceived;
- (void)deleteRequestReceived;
- (BOOL)hasRequestReceived;
- (void)setHasRequestReceived:;
- (id)speechContext;
- (void)deleteSpeechContext;
- (id)requestReceivedTier1;
- (void)deleteRequestReceivedTier1;
- (id)voiceFallbackOccurred;
- (void)deleteVoiceFallbackOccurred;
- (BOOL)hasSpeechContext;
- (void)setHasSpeechContext:;
- (BOOL)hasRequestReceivedTier1;
- (void)setHasRequestReceivedTier1:;
- (BOOL)hasVoiceFallbackOccurred;
- (void)setHasVoiceFallbackOccurred:;
+ (int)joinability;
@end
