@interface GRRSchemaGRRFeatureFlag : SISchemaInstrumentationMessage
@property (nonatomic) NSString featureFlagKey;
@property (nonatomic) BOOL hasFeatureFlagKey;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL hasIsEnabled;
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
- (void)setIsEnabled:;
- (BOOL)isEqual:;
- (BOOL)isEnabled;
- (void)setHasIsEnabled:;
- (BOOL)hasIsEnabled;
- (BOOL)hasFeatureFlagKey;
- (void)deleteFeatureFlagKey;
- (void)deleteIsEnabled;
- (id)featureFlagKey;
- (void)setFeatureFlagKey:;
- (void)setHasFeatureFlagKey:;
@end
