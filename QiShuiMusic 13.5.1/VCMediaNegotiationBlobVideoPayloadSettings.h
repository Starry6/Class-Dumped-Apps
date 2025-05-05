@interface VCMediaNegotiationBlobVideoPayloadSettings : PBCodable
@property (nonatomic) I payload;
@property (nonatomic) NSMutableArray videoRuleCollections;
@property (nonatomic) NSString featureString;
@property (nonatomic) I parameterSet;
- (unsigned int)payload;
- (void)dealloc;
- (void)setPayload:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setParameterSet:;
- (unsigned int)parameterSet;
- (id)videoRuleCollections;
- (void)setVideoRuleCollections:;
- (void)clearVideoRuleCollections;
- (void)addVideoRuleCollections:;
- (unsigned long long)videoRuleCollectionsCount;
- (id)videoRuleCollectionsAtIndex:;
- (id)featureString;
- (void)setFeatureString:;
+ (Class)videoRuleCollectionsType;
@end
