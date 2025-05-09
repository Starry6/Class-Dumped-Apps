@interface VCPProtoLivePhotoKeyFrameResult : PBCodable
@property (nonatomic) double timestamp;
@property (nonatomic) float qualityScoreForLivePhoto;
@property (nonatomic) float visualPleasingScore;
@property (nonatomic) float overallFaceQualityScore;
@property (nonatomic) float exposureScore;
@property (nonatomic) float penaltyScore;
@property (nonatomic) float textureScore;
@property (nonatomic) float sharpness;
@property (nonatomic) NSMutableArray faceResults;
@property (nonatomic) BOOL hasGlobalQualityScore;
@property (nonatomic) float globalQualityScore;
@property (nonatomic) BOOL hasContentScore;
@property (nonatomic) float contentScore;
@property (nonatomic) float expressionChangeScore;
- (void)writeTo:;
- (float)sharpness;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (double)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setSharpness:;
- (void)setExposureScore:;
- (float)exposureScore;
- (id)faceResults;
- (void)setContentScore:;
- (float)contentScore;
- (id)exportToLegacyDictionary;
- (void)clearFaceResults;
- (void)addFaceResults:;
- (unsigned long long)faceResultsCount;
- (id)faceResultsAtIndex:;
- (void)setGlobalQualityScore:;
- (void)setHasGlobalQualityScore:;
- (BOOL)hasGlobalQualityScore;
- (void)setHasContentScore:;
- (BOOL)hasContentScore;
- (float)qualityScoreForLivePhoto;
- (void)setQualityScoreForLivePhoto:;
- (float)visualPleasingScore;
- (void)setVisualPleasingScore:;
- (float)overallFaceQualityScore;
- (void)setOverallFaceQualityScore:;
- (float)penaltyScore;
- (void)setPenaltyScore:;
- (float)textureScore;
- (void)setTextureScore:;
- (void)setFaceResults:;
- (float)globalQualityScore;
- (float)expressionChangeScore;
- (void)setExpressionChangeScore:;
+ (id)resultFromLegacyDictionary:;
+ (Class)faceResultsType;
@end
