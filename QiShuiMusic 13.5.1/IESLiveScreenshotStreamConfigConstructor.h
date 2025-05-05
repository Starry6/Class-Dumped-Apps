@interface IESLiveScreenshotStreamConfigConstructor : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
- (id)adaptWidthHeight:isLandscape:;
- (id)constructStreamConfigWithRoom:clarityConfig:;
- (id)preprocessRTMPPushSDKParams:isLandscape:clarityConfig:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
@end
