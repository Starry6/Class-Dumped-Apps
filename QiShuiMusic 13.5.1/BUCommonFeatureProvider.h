@interface BUCommonFeatureProvider : NSObject
@property (nonatomic) MLModelDescription modelDesc;
@property (nonatomic) NSMutableDictionary featureDict;
@property (nonatomic) NSSet featureNames;
- (void)setFeatureDict:;
- (BOOL)addFeature:value:;
- (id)createFeatureWithValue:Type:;
- (id)modelDesc;
- (void)setModelDesc:;
- (id)initWithModel:;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)featureDict;
@end
