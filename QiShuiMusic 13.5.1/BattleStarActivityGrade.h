@interface BattleStarActivityGrade : IESLivePBBaseMessage
@property (nonatomic) NSString grade;
@property (nonatomic) q level;
@property (nonatomic) q starCount;
@property (nonatomic) q targetStarCount;
@property (nonatomic) BattleStarActivityGradeMedal starActivityGradeMedal;
@property (nonatomic) BOOL hasStarActivityGradeMedal;
@property (nonatomic) NSInteger gradeEnum;
+ (id)descriptor;
@end
