@interface MPNetworkObserver : NSObject
@property (nonatomic) BOOL isUsingNetwork;
@property (nonatomic) BOOL musicCellularStreamingAllowed;
@property (nonatomic) BOOL videoCellularStreamingAllowed;
@property (nonatomic) BOOL musicCellularDownloadingAllowed;
@property (nonatomic) BOOL storeCellularNetworkingAllowed;
- (id)init;
- (void)dealloc;
- (void)endUsingNetwork;
- (BOOL)isUsingNetwork;
- (void)setMusicCellularDownloadingAllowed:;
- (BOOL)isMusicCellularDownloadingAllowed;
- (BOOL)isMusicCellularStreamingAllowed;
- (void)beginUsingNetwork;
- (BOOL)isVideoCellularStreamingAllowed;
- (void)setMusicCellularStreamingAllowed:;
- (void)setVideoCellularStreamingAllowed:;
- (BOOL)isStoreCellularNetworkingAllowed;
- (void).cxx_destruct;
- (id)_init;
+ (id)sharedNetworkObserver;
@end
