@interface AWECloudAlbumDetailTimeTracker : NSObject
@property (nonatomic) AWECloudAlbumCostTimer timer;
@property (nonatomic) NSNumber albumId;
- (id)albumId;
- (void)setAlbumId:;
- (void)trackIfNeeded;
- (void)setTimer:;
- (id)timer;
- (void).cxx_destruct;
- (void)start;
@end
