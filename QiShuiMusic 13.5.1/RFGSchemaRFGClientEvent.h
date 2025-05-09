@interface RFGSchemaRFGClientEvent : SISchemaTopLevelUnionType
@property (nonatomic) SISchemaInstrumentationMessage innerEvent;
@property (nonatomic) RFSchemaRFGClientEventMetadata eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (nonatomic) RFSchemaRFGVisualResponseShownTier1 visualResponseShownTier1;
@property (nonatomic) BOOL hasVisualResponseShownTier1;
@property (nonatomic) RFSchemaRFGVisualResponseShownLink visualResponseShownLink;
@property (nonatomic) BOOL hasVisualResponseShownLink;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q whichEvent_Type;
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
- (BOOL)hasEventMetadata;
- (id)innerEvent;
- (id)getComponentId;
- (void)deleteEventMetadata;
- (void)setHasEventMetadata:;
- (void)setVisualResponseShownTier1:;
- (id)visualResponseShownTier1;
- (void)deleteVisualResponseShownTier1;
- (void)setVisualResponseShownLink:;
- (id)visualResponseShownLink;
- (void)deleteVisualResponseShownLink;
- (BOOL)hasVisualResponseShownTier1;
- (void)setHasVisualResponseShownTier1:;
- (BOOL)hasVisualResponseShownLink;
- (void)setHasVisualResponseShownLink:;
+ (int)joinability;
@end
