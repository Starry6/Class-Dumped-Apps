@interface IESLiveNetworkTrackerWrapper : NSObject
@property (nonatomic) NSMutableDictionary trackBasicInfo;
@property (nonatomic) NSMutableDictionary trackNetworkException;
@property (nonatomic) q sumException;
@property (nonatomic) NSObject<OS_dispatch_queue> trackQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)configAppStateKey;
- (long long)networkExceptionCount;
- (id)networkExceptionWithLimit:;
- (void)setSumException:;
- (void)setTrackBasicInfo:;
- (void)setTrackNetworkException:;
- (void)setTrackQueue:;
- (void)stopNetworkTrack;
- (long long)sumException;
- (id)topNetworkTrackField:top:;
- (id)topNetworkTrackFrequency:;
- (id)topNetworkTrackSize:;
- (id)trackBasicInfo;
- (void)trackNetworkBaseInfo:;
- (id)trackNetworkException;
- (void)trackNetworkException:;
- (id)trackQueue;
- (id)init;
- (void).cxx_destruct;
@end
