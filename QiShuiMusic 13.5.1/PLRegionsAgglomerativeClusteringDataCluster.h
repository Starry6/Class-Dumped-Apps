@interface PLRegionsAgglomerativeClusteringDataCluster : NSObject
@property (nonatomic) NSArray vectors;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (nonatomic) double score;
- (void)setRadius:;
- (double)score;
- (double)latitude;
- (double)radius;
- (void)setLatitude:;
- (void)setScore:;
- (void)setLongitude:;
- (void).cxx_destruct;
- (id)description;
- (double)longitude;
- (id)vectors;
- (id)initWithDataVector:;
+ (id)dataClusterWithDataVector:;
+ (id)mergedClusterFrom:;
@end
