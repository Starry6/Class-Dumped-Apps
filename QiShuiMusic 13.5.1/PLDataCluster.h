@interface PLDataCluster : NSObject
@property (nonatomic) NSArray objects;
@property (nonatomic) double diameter;
@property (nonatomic) @ clustroid;
@property (nonatomic) double score;
- (id)locations;
- (id)init;
- (id)meanUniversalDate;
- (void)setDiameter:;
- (double)score;
- (id)universalDates;
- (id)approximateRegionWithMaximumRadius:;
- (void)setObjects:;
- (id)meanRegion:;
- (id)clustroid;
- (id)objects;
- (double)diameter;
- (void)setScore:;
- (void).cxx_destruct;
- (id)description;
- (void)setClustroid:;
+ (id)clusterWithObjects:;
+ (id)clusterWithObjects:clustroid:diameter:;
@end
