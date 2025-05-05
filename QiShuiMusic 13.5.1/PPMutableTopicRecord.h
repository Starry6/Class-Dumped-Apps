@interface PPMutableTopicRecord : PPTopicRecord
@property (nonatomic) PPTopic topic;
@property (nonatomic) PPSource source;
@property (nonatomic) Q algorithm;
@property (nonatomic) double initialScore;
@property (nonatomic) double decayRate;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) NSString extractionOsBuild;
@property (nonatomic) I extractionAssetVersion;
@property (nonatomic) double sentimentScore;
@property (nonatomic) PPTopicMetadata metadata;
- (id)init;
- (void)setDecayRate:;
- (void)setInitialScore:;
- (void)setIsLocal:;
- (void)setTopic:;
- (void)setExtractionAssetVersion:;
- (void)setExtractionOsBuild:;
- (void)setAlgorithm:;
- (void)setMetadata:;
- (void)setSentimentScore:;
- (void)setSource:;
- (id)copyWithZone:;
@end
