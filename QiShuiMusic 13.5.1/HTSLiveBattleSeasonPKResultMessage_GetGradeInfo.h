@interface HTSLiveBattleSeasonPKResultMessage_GetGradeInfo : IESLivePBBaseMessage
@property (nonatomic) NSString getGradeDesc;
@property (nonatomic) HTSLiveImage gradeImg;
@property (nonatomic) BOOL hasGradeImg;
@property (nonatomic) HTSLiveImage startImg;
@property (nonatomic) BOOL hasStartImg;
+ (id)descriptor;
@end
