@interface HybridResourceConfig : NSObject
@property (nonatomic) NSMutableDictionary falconPrefixList;
@property (nonatomic) HybridResourceLoaderConfig loaderConfig;
@property (nonatomic) HybridRLOperator advancedOperator;
@property (nonatomic) NSNumber useForest;
- (id)advancedOperator;
- (id)falconPrefixList;
- (id)loaderConfig;
- (void)setAdvancedOperator:;
- (void)setFalconPrefixList:;
- (void)setLoaderConfig:;
- (void)setUseForest:;
- (id)useForest;
- (id)init;
- (void).cxx_destruct;
+ (id)defaultResourceConfig;
+ (id)sharedInstance;
@end
