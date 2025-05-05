@interface IESLiveWatchDurationManager : NSObject
@property (nonatomic) NSTimer liveWatchTimer;
@property (nonatomic) q watchDuration;
@property (nonatomic) NSArray durationCollectArray;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) BOOL enable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startLiveWatch:;
- (long long)currentLiveWatchDuration;
- (void)didSetAttachingDIContext;
- (id)durationCollectArray;
- (id)initWithDIContext:;
- (long long)liveWatchDurationWithRoomID:;
- (id)liveWatchTimer;
- (void)setDurationCollectArray:;
- (void)setLiveWatchTimer:;
- (void)setWatchDuration:;
- (void)stopLiveWatch:;
- (long long)watchDuration;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
- (id)roomID;
- (void)setRoomID:;
@end
