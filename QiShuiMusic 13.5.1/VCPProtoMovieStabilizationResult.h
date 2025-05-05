@interface VCPProtoMovieStabilizationResult : PBCodable
@property (nonatomic) float analysisConfidence;
@property (nonatomic) BOOL gyroStabilization;
@property (nonatomic) BOOL hasRecipeBlob;
@property (nonatomic) NSData recipeBlob;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)exportToLegacyDictionary;
- (BOOL)gyroStabilization;
- (void)setGyroStabilization:;
- (float)analysisConfidence;
- (void)setAnalysisConfidence:;
- (BOOL)hasRecipeBlob;
- (id)recipeBlob;
- (void)setRecipeBlob:;
+ (id)resultFromLegacyDictionary:;
@end
