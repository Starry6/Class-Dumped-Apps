@interface AWEConcernProbeAliveManager : NSObject
@property (nonatomic) BOOL hasTrackForProbeAlive;
@property (nonatomic) BOOL hasLastView;
@property (nonatomic) BOOL hasProbeAlive;
@property (nonatomic) q lastViewIndex;
@property (nonatomic) NSDate lastRefreshTime;
- (void)refreshProbeAliveStatus;
- (void)refreshProbeAliveTime;
- (void)setHasLastView:;
- (void)setLastViewIndex:;
- (void)setHasProbeAlive:;
- (void)setHasTrackForProbeAlive:;
- (void)setLastRefreshTime:;
- (BOOL)hasProbeAlive;
- (BOOL)hasLastView;
- (long long)lastViewIndex;
- (id)lastRefreshTime;
- (void)refreshLastViewInformationWithDataSource:;
- (void)probeAliveIfNeedWithCurrentIndex:completionBlock:;
- (id)findDeleteIndexPathFromIndex:inDataSource:;
- (BOOL)hasTrackForProbeAlive;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
