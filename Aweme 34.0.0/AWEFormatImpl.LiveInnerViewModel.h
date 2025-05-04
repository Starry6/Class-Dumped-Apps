@interface AWEFormatImpl.LiveInnerViewModel : NSObject
- (void)rtcClient:onError:;
- (void)rtcClient:onJoinRoomFinish:;
- (void)rtcClientOnLeaveRoomFinish:;
- (void)rtcClient:onUserLeaved:reason:;
- (void)rtcClient:onSEIReceived:fromUserID:;
- (void)rtcClient:onUserJoined:;
- (void)rtcClient:onFirstRemoteVideoFrameFromUserID:;
- (void)rtcClient:onFirstRemoteVideoFrameRenderedFromUserID:;
- (void)rtcClient:onUserMessageReceived:from:;
- (void)rtcClient:onUserBinaryMessageReceived:from:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
