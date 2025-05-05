@interface PLRegionsClustering : NSObject
- (id)performWithDataset:progressBlock:;
+ (id)performClustering:dataset:progressBlock:;
@end
