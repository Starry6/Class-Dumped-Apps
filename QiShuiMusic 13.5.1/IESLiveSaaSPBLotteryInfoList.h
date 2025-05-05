@interface IESLiveSaaSPBLotteryInfoList : GPBMessage
@property (nonatomic) NSString activityId;
@property (nonatomic) q taskType;
@property (nonatomic) q openTime;
@property (nonatomic) q userActivityStatus;
@property (nonatomic) NSString winRecordId;
@property (nonatomic) NSString resultLabel;
@property (nonatomic) NSString buttonLabel;
@property (nonatomic) NSMutableArray textArray;
@property (nonatomic) Q textArray_Count;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) q lotteryType;
@property (nonatomic) NSString elasticTitle;
@property (nonatomic) IESLiveSaaSPBBenefitLabel benefitLabel;
@property (nonatomic) BOOL hasBenefitLabel;
+ (id)descriptor;
@end
