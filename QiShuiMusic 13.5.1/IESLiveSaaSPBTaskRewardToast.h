@interface IESLiveSaaSPBTaskRewardToast : GPBMessage
@property (nonatomic) NSInteger taskId;
@property (nonatomic) NSInteger taskType;
@property (nonatomic) NSInteger rewardType;
@property (nonatomic) NSInteger rewardAmount;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSString bgPicURL;
@property (nonatomic) NSString tip;
@property (nonatomic) NSString finishSound;
+ (id)descriptor;
@end
