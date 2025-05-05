@interface HTSLiveGrowthTaskStage : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray conditionListArray;
@property (nonatomic) Q conditionListArray_Count;
@property (nonatomic) NSMutableArray rewardListArray;
@property (nonatomic) Q rewardListArray_Count;
+ (id)descriptor;
@end
