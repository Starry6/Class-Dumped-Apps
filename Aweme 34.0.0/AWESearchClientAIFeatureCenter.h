@interface AWESearchClientAIFeatureCenter : NSObject
@property (nonatomic) NSMutableDictionary featureToBlockMap;
@property (nonatomic) NSMutableDictionary businessToFeatureMap;
- (void)clearAllFeatures;
- (void)registerFeatureWithConfig:;
- (id)getFeatureWithBusinessName:;
- (id)generateKeyWithConfig:;
- (id)featureToBlockMap;
- (id)businessToFeatureMap;
- (id)generateKeyWithBusinessName:andFeatureName:;
- (id)getFeatureWithConfig:;
- (void)deleteFeatureWithConfig:;
- (void)deleteFeatureWithBusinessName:;
- (void)setFeatureToBlockMap:;
- (void)setBusinessToFeatureMap:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
