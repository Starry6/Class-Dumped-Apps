@interface AWELiveSmoothEnterRoomLivePlayerPreloaderOptions : NSObject
@property (nonatomic) NSDictionary settingInfo;
@property (nonatomic) NSString streamData;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) IESLivePlayerBizStainedTrackInfo playerStainedTrackInfo;
@property (nonatomic) NSDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (void)setStreamData:;
- (id)settingInfo;
- (id)playerStainedTrackInfo;
- (void)setSettingInfo:;
- (void)setPlayerStainedTrackInfo:;
- (id)roomID;
- (void).cxx_destruct;
- (void)setRoomID:;
- (id)streamData;
@end
