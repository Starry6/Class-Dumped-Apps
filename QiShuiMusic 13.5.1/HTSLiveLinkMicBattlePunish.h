@interface HTSLiveLinkMicBattlePunish : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q messageType;
@property (nonatomic) NSMutableArray punishEffectListArray;
@property (nonatomic) Q punishEffectListArray_Count;
@property (nonatomic) NSString prompts;
@property (nonatomic) HTSLiveUser mvp;
@property (nonatomic) BOOL hasMvp;
@property (nonatomic) q medicineCount;
@property (nonatomic) HTSLivePunishEffect targetEffect;
@property (nonatomic) BOOL hasTargetEffect;
@property (nonatomic) q startTime;
@property (nonatomic) HTSLiveUser targetUser;
@property (nonatomic) BOOL hasTargetUser;
@property (nonatomic) q speedyGiftId;
@property (nonatomic) q duration;
@property (nonatomic) q channelId;
@property (nonatomic) q battleId;
+ (id)descriptor;
@end
