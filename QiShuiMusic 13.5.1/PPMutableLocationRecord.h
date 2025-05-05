@interface PPMutableLocationRecord : PPLocationRecord
@property (nonatomic) NSUUID uuid;
@property (nonatomic) PPLocation location;
@property (nonatomic) PPSource source;
@property (nonatomic) S algorithm;
@property (nonatomic) double initialScore;
@property (nonatomic) double decayRate;
@property (nonatomic) double sentimentScore;
@property (nonatomic) NSArray contextualNamedEntities;
@property (nonatomic) NSString extractionOsBuild;
@property (nonatomic) I extractionAssetVersion;
- (id)init;
- (void)setDecayRate:;
- (void)setInitialScore:;
- (void)setExtractionAssetVersion:;
- (void)setUuid:;
- (void)setExtractionOsBuild:;
- (void)setAlgorithm:;
- (void)setLocation:;
- (void)setSentimentScore:;
- (void)setSource:;
- (id)copyWithZone:;
- (void)setContextualNamedEntities:;
+ (id)new;
@end
