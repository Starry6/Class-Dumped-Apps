@interface BreakthroughConfig : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray stagesArray;
@property (nonatomic) Q stagesArray_Count;
@property (nonatomic) HTSLiveImage mvpImage;
@property (nonatomic) BOOL hasMvpImage;
@property (nonatomic) q highScoreThreshold;
+ (id)descriptor;
@end
