@interface SNKShotFeaturizationStreamResult : NSObject
@property (nonatomic) MLMultiArray data;
@property (nonatomic) SNKShotLabel label;
@property (nonatomic) q datasetType;
- (id)data;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (void)setData:;
- (long long)datasetType;
- (void)setDatasetType:;
@end
