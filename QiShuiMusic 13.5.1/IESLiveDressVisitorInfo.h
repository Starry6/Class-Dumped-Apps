@interface IESLiveDressVisitorInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger buttonStatus;
@property (nonatomic) IESLiveDressVisitorInfo_VisitorStatistic statistic;
@property (nonatomic) BOOL hasStatistic;
@property (nonatomic) NSInteger achievementType;
@property (nonatomic) NSString jumpSchema;
+ (id)descriptor;
@end
