@interface PLAssetCluster : NSObject
@property (nonatomic) NSArray assets;
@property (nonatomic) CLLocation location;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
- (id)startDate;
- (id)assets;
- (id)location;
- (id)initWithAssetsSortedByDate:region:;
- (id)endDate;
- (void).cxx_destruct;
- (id)description;
+ (id)mergedCluster:;
+ (id)sortByTimeSortDescriptors;
@end
