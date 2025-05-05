@interface HTSLiveGuestBattleGradeItem : IESLivePBBaseMessage
@property (nonatomic) q level;
@property (nonatomic) NSString levelStr;
@property (nonatomic) q score;
@property (nonatomic) NSString scoreStr;
@property (nonatomic) BOOL isFullLevel;
+ (id)descriptor;
@end
