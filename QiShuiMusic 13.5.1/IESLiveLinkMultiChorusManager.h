@interface IESLiveLinkMultiChorusManager : NSObject
@property (nonatomic) IESLiveLinkLiveRtc liveRtc;
@property (nonatomic) <IMultiChorusDelegate> multiChorusDelegate;
@property (nonatomic) ByteRTCChorusCacheSyncConfig multiChorusConfig;
@property (nonatomic) NSString roomId;
@property (nonatomic) NSString userId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)liveRtc;
- (id)multiChorusConfig;
- (id)multiChorusDelegate;
- (void)onSyncEvent:withError:;
- (void)onSyncedUsersChanged:;
- (id)roomId;
- (id)rtcEngineKit;
- (void)setLiveRtc:;
- (void)setMultiChorusConfig:;
- (void)setMultiChorusDelegate:;
- (void)setRoomId:;
- (void)setupWithConfig:;
- (int)startChorusCacheSync:;
- (int)stopChorusCacheSync;
- (void)onSyncedVideoFrames:withUids:;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
@end
