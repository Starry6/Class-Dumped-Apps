@interface FLOWSchemaFLOWBriefingContext : SISchemaInstrumentationMessage
@property (nonatomic) NSArray enabledFeatures;
@property (nonatomic) NSInteger briefingAttribute;
@property (nonatomic) BOOL hasBriefingAttribute;
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
- (void)clearEnabledFeatures;
- (void)deleteEnabledFeatures;
- (void)addEnabledFeatures:;
- (unsigned long long)enabledFeaturesCount;
- (int)enabledFeaturesAtIndex:;
- (void)setBriefingAttribute:;
- (BOOL)hasBriefingAttribute;
- (void)setHasBriefingAttribute:;
- (void)deleteBriefingAttribute;
- (id)enabledFeatures;
- (void)setEnabledFeatures:;
- (int)briefingAttribute;
@end
