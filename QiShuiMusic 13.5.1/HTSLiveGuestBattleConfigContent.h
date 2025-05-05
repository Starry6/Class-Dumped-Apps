@interface HTSLiveGuestBattleConfigContent : IESLivePBBaseMessage
@property (nonatomic) NSInteger isAnchorInvolved;
@property (nonatomic) q lastBattleDurationByAnchor;
@property (nonatomic) q loserNum;
@property (nonatomic) q scoreType;
@property (nonatomic) q uiType;
+ (id)descriptor;
@end
