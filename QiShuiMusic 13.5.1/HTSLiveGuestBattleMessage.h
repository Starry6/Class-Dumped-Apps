@interface HTSLiveGuestBattleMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q msgType;
@property (nonatomic) HTSLiveGuestBattleInfo battleInfo;
@property (nonatomic) BOOL hasBattleInfo;
@property (nonatomic) NSString finishToast;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) HTSLiveGuestBattleUpdateContent updateContent;
@property (nonatomic) HTSLiveGuestBattleFinishContent finishContent;
+ (id)descriptor;
@end
