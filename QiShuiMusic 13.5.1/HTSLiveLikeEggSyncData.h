@interface HTSLiveLikeEggSyncData : IESLivePBBaseMessage
@property (nonatomic) q originalDuration;
@property (nonatomic) NSString content;
@property (nonatomic) HTSLiveLikeEggTrayColor trayColor;
@property (nonatomic) BOOL hasTrayColor;
@property (nonatomic) q userStartTimestamp;
@property (nonatomic) q userStartSecond;
@property (nonatomic) q duration;
@property (nonatomic) HTSLiveLikeEggJumpDetail jumpDetail;
@property (nonatomic) BOOL hasJumpDetail;
@property (nonatomic) NSString prepareContent;
@property (nonatomic) q prepareDuration;
@property (nonatomic) NSString finishContent;
@property (nonatomic) q finishDuration;
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
- (long long)originalDuration;
- (void)setOriginalDuration:;
+ (id)descriptor;
@end
