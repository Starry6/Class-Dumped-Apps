@interface IESLiveSaaSPBUserVIPInfo : GPBMessage
@property (nonatomic) q vipLevel;
@property (nonatomic) NSString vipLevelName;
@property (nonatomic) NSInteger status;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) q remainingDays;
@property (nonatomic) q totalConsume;
@property (nonatomic) q targetConsume;
@property (nonatomic) GPBInt64BoolDictionary privileges;
@property (nonatomic) Q privileges_Count;
+ (id)descriptor;
@end
