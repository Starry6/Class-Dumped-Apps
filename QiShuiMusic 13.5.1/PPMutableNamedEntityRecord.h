@interface PPMutableNamedEntityRecord : PPNamedEntityRecord
@property (nonatomic) PPNamedEntity entity;
@property (nonatomic) PPSource source;
@property (nonatomic) Q algorithm;
@property (nonatomic) double initialScore;
@property (nonatomic) double decayRate;
@property (nonatomic) NSString extractionOsBuild;
@property (nonatomic) C changeType;
@property (nonatomic) I extractionAssetVersion;
@property (nonatomic) double sentimentScore;
@property (nonatomic) PPNamedEntityMetadata metadata;
- (void)setEntity:;
- (id)init;
- (void)setDecayRate:;
- (void)setInitialScore:;
- (void)setExtractionAssetVersion:;
- (void)setExtractionOsBuild:;
- (void)setAlgorithm:;
- (void)setMetadata:;
- (void)setChangeType:;
- (void)setSentimentScore:;
- (void)setSource:;
- (id)copyWithZone:;
@end
