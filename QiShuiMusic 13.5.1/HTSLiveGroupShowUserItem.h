@interface HTSLiveGroupShowUserItem : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser groupShowUser;
@property (nonatomic) BOOL hasGroupShowUser;
@property (nonatomic) NSString description_p;
@property (nonatomic) NSString sendButtonText;
@property (nonatomic) q groupShowFanTicketCount;
@property (nonatomic) q groupShowCurRoundFanTicketCount;
@property (nonatomic) q showEndTime;
@property (nonatomic) NSInteger identityLabel;
@property (nonatomic) HTSLiveImage liveAvatarFrameImage;
@property (nonatomic) BOOL hasLiveAvatarFrameImage;
@property (nonatomic) HTSLiveImage bgImage;
@property (nonatomic) BOOL hasBgImage;
@property (nonatomic) HTSLiveShowStatusLabel showStatusLabel;
@property (nonatomic) BOOL hasShowStatusLabel;
@property (nonatomic) BOOL isBestShower;
@property (nonatomic) NSInteger showStatus;
+ (id)descriptor;
@end
