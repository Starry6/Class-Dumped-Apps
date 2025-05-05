@interface SurvivalConfig : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray stagesArray;
@property (nonatomic) Q stagesArray_Count;
@property (nonatomic) NSString outAnimationURL;
+ (id)descriptor;
@end
