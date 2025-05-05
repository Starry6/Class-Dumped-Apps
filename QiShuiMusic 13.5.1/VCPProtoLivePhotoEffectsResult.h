@interface VCPProtoLivePhotoEffectsResult : PBCodable
@property (nonatomic) Q loopSuggestionState;
@property (nonatomic) Q longExposureSuggestionState;
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
- (BOOL)hasRecipeBlob;
- (id)recipeBlob;
- (void)setRecipeBlob:;
- (unsigned long long)loopSuggestionState;
- (void)setLoopSuggestionState:;
- (unsigned long long)longExposureSuggestionState;
- (void)setLongExposureSuggestionState:;
+ (id)resultFromLegacyDictionary:;
@end
