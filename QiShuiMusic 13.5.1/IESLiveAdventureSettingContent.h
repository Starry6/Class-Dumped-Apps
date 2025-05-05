@interface IESLiveAdventureSettingContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage headerBackground;
@property (nonatomic) BOOL hasHeaderBackground;
@property (nonatomic) NSMutableArray stageInfoListArray;
@property (nonatomic) Q stageInfoListArray_Count;
@property (nonatomic) IESLiveAdventureStageInfo callStage;
@property (nonatomic) BOOL hasCallStage;
+ (id)descriptor;
@end
