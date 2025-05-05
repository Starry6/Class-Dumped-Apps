@interface IESLiveMultiRtcInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger scene;
@property (nonatomic) NSInteger rtcInfoOneOfCase;
@property (nonatomic) IESLiveVideoEqualRoomRtcInfo videoEqualRoomRtcInfo;
@property (nonatomic) IESLiveMultiAnchorLinkmicRtcInfo multiAnchorLinkmicRtcInfo;
@property (nonatomic) IESLiveSingingChallengeRtcInfo singingChallengeRtcInfo;
@property (nonatomic) IESLiveCrossRoomLinkmicRtcInfo crossRoomLinkmicRtcInfo;
@property (nonatomic) IESLiveVideoDUOBattleRtcInfo videoDuoBattleRtcInfo;
@property (nonatomic) IESLiveVideoPositionRtcInfo videoPositionRtcInfo;
+ (id)descriptor;
@end
