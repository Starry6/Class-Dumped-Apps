@interface HTSLiveUserFansclubInfo_FansclubTaskInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger taskType;
@property (nonatomic) q compeletedNum;
@property (nonatomic) q totalNum;
@property (nonatomic) q intimacyBonus;
@property (nonatomic) NSString description_p;
+ (id)descriptor;
@end
