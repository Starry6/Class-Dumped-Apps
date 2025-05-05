@interface HTSLiveMultiStageProgressBar : IESLivePBBaseMessage
@property (nonatomic) NSString progressColor;
@property (nonatomic) NSString progressBackgroundColor;
@property (nonatomic) NSMutableArray stageListArray;
@property (nonatomic) Q stageListArray_Count;
@property (nonatomic) NSString cardBackgroundColor;
@property (nonatomic) HTSLiveImage cardBackgroundIcon;
@property (nonatomic) BOOL hasCardBackgroundIcon;
@property (nonatomic) q completedStage;
+ (id)descriptor;
@end
