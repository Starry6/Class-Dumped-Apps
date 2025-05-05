@interface HTSLiveGuestBattleInfo : IESLivePBBaseMessage
@property (nonatomic) q battleId;
@property (nonatomic) q battleType;
@property (nonatomic) q status;
@property (nonatomic) NSMutableArray resultsArray;
@property (nonatomic) Q resultsArray_Count;
@property (nonatomic) q currentTime;
@property (nonatomic) q finishTime;
@property (nonatomic) q showDuration;
@property (nonatomic) NSString battleIdStr;
@property (nonatomic) q loserNum;
@property (nonatomic) NSString dressId;
@property (nonatomic) q scoreType;
@property (nonatomic) HTSLiveGuestBattleUIInfo uiInfo;
@property (nonatomic) BOOL hasUiInfo;
@property (nonatomic) q threshold;
@property (nonatomic) q sprintDuration;
@property (nonatomic) NSInteger battleStage;
@property (nonatomic) q uiType;
+ (id)descriptor;
@end
