@interface HTSLiveGrowthTask : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString idStr;
@property (nonatomic) q liveId;
@property (nonatomic) q appId;
@property (nonatomic) q classId;
@property (nonatomic) q groupId;
@property (nonatomic) NSInteger itemType;
@property (nonatomic) NSString itemOpenId;
@property (nonatomic) NSString taskName;
@property (nonatomic) NSString taskDesc;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) q displayStartTime;
@property (nonatomic) q displayEndTime;
@property (nonatomic) NSInteger status;
@property (nonatomic) q completedStage;
@property (nonatomic) q finishTime;
@property (nonatomic) NSMutableArray stageListArray;
@property (nonatomic) Q stageListArray_Count;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString config;
@property (nonatomic) q createTime;
+ (id)descriptor;
@end
