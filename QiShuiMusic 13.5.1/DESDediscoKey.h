@interface DESDediscoKey : NSObject
@property (nonatomic) NSString environment;
@property (nonatomic) NSString privacyID;
@property (nonatomic) NSString recipeID;
- (id)environment;
- (id)recipeID;
- (void).cxx_destruct;
- (id)initWithPrivacyID:environment:recipeID:;
- (id)resultsKeyString;
- (id)resultsKeyStringForChunk:;
- (id)metricsKeyString;
- (id)metadataKeyString;
- (id)metadataEncodedMetricsKeyString;
- (id)privacyID;
@end
