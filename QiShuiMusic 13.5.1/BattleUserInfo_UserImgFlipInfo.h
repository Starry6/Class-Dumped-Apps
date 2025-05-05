@interface BattleUserInfo_UserImgFlipInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage flipImage;
@property (nonatomic) BOOL hasFlipImage;
@property (nonatomic) HTSLiveImage pkStageMedal;
@property (nonatomic) BOOL hasPkStageMedal;
@property (nonatomic) NSString pkStageDesc;
@property (nonatomic) NSString scheme;
+ (id)descriptor;
@end
