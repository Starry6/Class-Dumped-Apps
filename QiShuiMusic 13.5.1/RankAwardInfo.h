@interface RankAwardInfo : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray gradeAwardInfosArray;
@property (nonatomic) Q gradeAwardInfosArray_Count;
+ (id)descriptor;
@end
