@interface MHSchemaMHRTSFalseRejectDetected : SISchemaInstrumentationMessage
@property (nonatomic) I assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
@property (nonatomic) NSString gestureModelVersion;
@property (nonatomic) BOOL hasGestureModelVersion;
@property (nonatomic) NSString audioModelVersion;
@property (nonatomic) BOOL hasAudioModelVersion;
@property (nonatomic) NSString policyModelVersion;
@property (nonatomic) BOOL hasPolicyModelVersion;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setAssetVersion:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (unsigned int)assetVersion;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasAssetVersion;
- (void)deleteAssetVersion;
- (void)setHasAssetVersion:;
- (BOOL)hasGestureModelVersion;
- (void)deleteGestureModelVersion;
- (BOOL)hasAudioModelVersion;
- (void)deleteAudioModelVersion;
- (BOOL)hasPolicyModelVersion;
- (void)deletePolicyModelVersion;
- (id)gestureModelVersion;
- (void)setGestureModelVersion:;
- (id)audioModelVersion;
- (void)setAudioModelVersion:;
- (id)policyModelVersion;
- (void)setPolicyModelVersion:;
- (void)setHasGestureModelVersion:;
- (void)setHasAudioModelVersion:;
- (void)setHasPolicyModelVersion:;
@end
