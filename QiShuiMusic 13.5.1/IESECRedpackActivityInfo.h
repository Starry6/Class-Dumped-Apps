@interface IESECRedpackActivityInfo : GPBMessage
@property (nonatomic) q redpackType;
@property (nonatomic) NSString redpackActivityId;
@property (nonatomic) NSString redpackActivityName;
@property (nonatomic) q startApplyTime;
@property (nonatomic) q endApplyTime;
@property (nonatomic) q preheatTime;
@property (nonatomic) q totalAmount;
@property (nonatomic) NSString authorAvatarURL;
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString pendantBackgroundURL;
@property (nonatomic) NSString redpackFrontBackgroundURL;
@property (nonatomic) NSString redpackLabel;
@property (nonatomic) NSString redpackAfterBackgroundURL;
@property (nonatomic) NSString redpackAfterBeltURL;
@property (nonatomic) q scatterTime;
@property (nonatomic) q serverTime;
@property (nonatomic) q maxAmount;
@property (nonatomic) q showType;
@property (nonatomic) NSString shorttouchPendantBackgroundURL;
@property (nonatomic) NSString shorttouchPendantIconURL;
@property (nonatomic) NSString shorttouchLottieURL;
+ (id)descriptor;
@end
