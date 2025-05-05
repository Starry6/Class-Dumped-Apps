@interface IESLiveSaaSGuideBarThresholdConfig : GPBMessage
@property (nonatomic) NSInteger dailyShowLimit;
@property (nonatomic) q minShowInterval;
@property (nonatomic) NSInteger totalShowLimit;
@property (nonatomic) q newUserProtectionSecond;
@property (nonatomic) q enterRoomWaitSecond;
@property (nonatomic) BOOL tobAuthHasPrivacyPolicy;
+ (id)descriptor;
@end
