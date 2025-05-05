@interface IESLiveSaaSPBSportsQuizOption : GPBMessage
@property (nonatomic) q optionId;
@property (nonatomic) NSString optionDesc;
@property (nonatomic) q betAmount;
@property (nonatomic) NSString betAmountStr;
@property (nonatomic) double rate;
@property (nonatomic) NSString rateStr;
+ (id)descriptor;
@end
