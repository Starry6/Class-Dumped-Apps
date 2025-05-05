@interface IESLiveMultiLiveCoreInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger scene;
@property (nonatomic) NSInteger liveCoreInfoOneOfCase;
@property (nonatomic) IESLiveVideoEqualRoomLiveCoreInfo videoEqualRoomLiveCoreInfo;
@property (nonatomic) IESLiveKTVLiveCoreInfo ktvLiveCoreInfo;
@property (nonatomic) IESLiveMultiAnchorLinkmicLiveCoreInfo multiAnchorLinkmicLiveCoreInfo;
@property (nonatomic) IESLiveSingingChallengeLiveCoreInfo singingChallengeLiveCoreInfo;
@property (nonatomic) IESLiveVideoDUOBattleLiveCoreInfo videoDuoBattleLiveCoreInfo;
@property (nonatomic) IESLiveVideoPositionLiveCoreInfo videoPositionLiveCoreInfo;
+ (id)descriptor;
@end
