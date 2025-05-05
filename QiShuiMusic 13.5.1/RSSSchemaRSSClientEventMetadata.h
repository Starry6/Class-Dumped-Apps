@interface RSSSchemaRSSClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID rssId;
@property (nonatomic) BOOL hasRssId;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasRssId;
- (void)deleteRssId;
- (id)rssId;
- (void)setRssId:;
- (void)setHasRssId:;
@end
