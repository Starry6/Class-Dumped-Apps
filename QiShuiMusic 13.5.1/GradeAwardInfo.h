@interface GradeAwardInfo : IESLivePBBaseMessage
@property (nonatomic) q awardId;
@property (nonatomic) NSMutableArray awardInfosArray;
@property (nonatomic) Q awardInfosArray_Count;
@property (nonatomic) NSInteger status;
@property (nonatomic) BattleStarActivityGradeMedal descImage;
@property (nonatomic) BOOL hasDescImage;
@property (nonatomic) NSString description_p;
@property (nonatomic) q countdown;
@property (nonatomic) NSString awardTime;
@property (nonatomic) NSString title;
+ (id)descriptor;
@end
