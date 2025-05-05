@interface TeamTask_Config : IESLivePBBaseMessage
@property (nonatomic) GPBInt64ObjectDictionary periodConfig;
@property (nonatomic) Q periodConfig_Count;
@property (nonatomic) q rewardBuffMultiple;
@property (nonatomic) NSInteger taskType;
@property (nonatomic) TeamTask_ExtraConfig extraConfig;
@property (nonatomic) BOOL hasExtraConfig;
@property (nonatomic) NSInteger targetType;
@property (nonatomic) NSInteger rewardType;
@property (nonatomic) NSInteger teamWorkTeamTaskType;
@property (nonatomic) GPBInt64Array stageRewardBuffMultipleArray;
@property (nonatomic) Q stageRewardBuffMultipleArray_Count;
+ (id)descriptor;
@end
