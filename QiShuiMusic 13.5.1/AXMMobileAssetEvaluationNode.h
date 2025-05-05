@interface AXMMobileAssetEvaluationNode : AXMEvaluationNode
@property (nonatomic) NSArray mlModels;
@property (nonatomic) NSURL mobileAssetBaseURL;
- (unsigned long long)formatVersion;
- (unsigned long long)minSupportedFormatVersion;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (unsigned long long)maxSupportedFormatVersion;
- (id)mobileAssetType;
- (void)evaluate:metrics:;
- (id)mlModelClasses;
- (id)modelResourceNames;
- (id)modelURLs;
- (void)setModelURLs:;
- (id)contentVersionKey;
- (void)_downloadAssetsIfNecessary;
- (id)mlModels;
- (id)mobileAssetBaseURL;
@end
