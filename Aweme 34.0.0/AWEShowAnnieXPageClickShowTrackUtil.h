@interface AWEShowAnnieXPageClickShowTrackUtil : NSObject
@property (nonatomic) NSString containerID;
@property (nonatomic) AWEShowAnnieXPageTrackInfo trackInfo;
@property (nonatomic) NSTimer loadTimeoutTimer;
@property (nonatomic) @? loadTimeOutEvent;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSDictionary extraParams;
- (id)aweme;
- (void)setAweme:;
- (void)setExtraParams:;
- (id)extraParams;
- (void)releaseTimeoutTimer;
- (id)loadTimeoutTimer;
- (id)loadTimeOutEvent;
- (void)setLoadTimeoutTimer:;
- (void)recordWillLoadTime;
- (void)recordLoadEndTime;
- (double)getLoadDuration;
- (void)setLoadTimeOutEvent:;
- (void)setContainerID:;
- (id)initWithContainerID:;
- (id)containerID;
- (void).cxx_destruct;
- (void)setTrackInfo:;
- (id)trackInfo;
- (void)createTimeoutTimer;
@end
