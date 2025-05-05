@interface IESLiveSaaSScreenshotStreamConfigConstructor : NSObject
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
- (id)adaptWidthHeight:swape:;
- (id)constructStreamConfigWithRoom:clarityConfig:;
- (id)preprocessRTMPPushSDKParams:swapeWidthHeight:clarityConfig:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
@end
