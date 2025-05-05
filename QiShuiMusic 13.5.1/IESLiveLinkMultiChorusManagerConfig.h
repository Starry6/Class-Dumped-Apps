@interface IESLiveLinkMultiChorusManagerConfig : NSObject
@property (nonatomic) IESLiveLinkLiveRtc rtcEngineKit;
@property (nonatomic) NSString userId;
@property (nonatomic) NSString roomId;
@property (nonatomic) <IMultiChorusDelegate> chorusDelegate;
- (id)chorusDelegate;
- (id)roomId;
- (id)rtcEngineKit;
- (void)setChorusDelegate:;
- (void)setRoomId:;
- (void)setRtcEngineKit:;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
@end
