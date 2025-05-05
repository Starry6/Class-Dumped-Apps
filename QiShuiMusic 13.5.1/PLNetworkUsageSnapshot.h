@interface PLNetworkUsageSnapshot : NSObject
@property (nonatomic) NSDate timestamp;
@property (nonatomic) NSString cellType;
@property (nonatomic) NSString quality;
@property (nonatomic) NSString wifi;
- (id)wifi;
- (id)quality;
- (void)setQuality:;
- (id)initWithInfo:;
- (void)setCellType:;
- (id)cellType;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (void)setWifi:;
- (id)timestamp;
- (id)description;
- (double)computeEnergyDiff:;
- (void)snapshotNetworkState;
- (double)computeEnergyDiffUntilNow:;
@end
