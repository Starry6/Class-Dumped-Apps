@interface ActivityPKConf : IESLivePBBaseMessage
@property (nonatomic) NSString activityName;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) HTSLiveText displayTabText;
@property (nonatomic) BOOL hasDisplayTabText;
@property (nonatomic) NSMutableArray displayTabImagesArray;
@property (nonatomic) Q displayTabImagesArray_Count;
@property (nonatomic) NSString searchTabText;
@property (nonatomic) NSString rulePageURL;
@property (nonatomic) HTSLiveImage randomBattleButtonImage;
@property (nonatomic) BOOL hasRandomBattleButtonImage;
@property (nonatomic) NSString randomBattleButtonText;
@property (nonatomic) HTSLiveImage inviteBattleButtonImage;
@property (nonatomic) BOOL hasInviteBattleButtonImage;
@property (nonatomic) NSString inviteBattleButtonText;
@property (nonatomic) NSMutableArray backGroundImagesArray;
@property (nonatomic) Q backGroundImagesArray_Count;
@property (nonatomic) HTSLiveImage topRightImage;
@property (nonatomic) BOOL hasTopRightImage;
@property (nonatomic) NSString topRightImageTabURL;
@property (nonatomic) NSString historyPageURL;
@property (nonatomic) NSString step;
+ (id)descriptor;
@end
