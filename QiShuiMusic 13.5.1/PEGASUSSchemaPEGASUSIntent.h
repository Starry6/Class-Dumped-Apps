@interface PEGASUSSchemaPEGASUSIntent : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) NSInteger intentCategory;
@property (nonatomic) BOOL hasIntentCategory;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSInteger source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) float confidence;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) NSData jsonData;
- (float)confidence;
- (void)setHasIntentCategory:;
- (void)setConfidence:;
- (void)setName:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (BOOL)hasName;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setHasSource:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)hasIntentCategory;
- (void)setIntentCategory:;
- (int)intentCategory;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (int)source;
- (BOOL)readFrom:;
- (BOOL)hasSource;
- (id)name;
- (id)dictionaryRepresentation;
- (void)setSource:;
- (BOOL)isEqual:;
- (void)setHasConfidence:;
- (BOOL)hasConfidence;
- (void)setHasName:;
- (id)linkId;
- (void)setLinkId:;
- (void)setHasLinkId:;
- (BOOL)hasLinkId;
- (void)deleteLinkId;
- (void)deleteConfidence;
- (void)deleteName;
- (void)deleteIntentCategory;
- (void)deleteSource;
@end
