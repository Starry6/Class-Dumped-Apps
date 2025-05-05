@interface HTSLivePortalInvite : IESLivePBBaseMessage
@property (nonatomic) q inviteCountDown;
@property (nonatomic) q rewardCountDown;
@property (nonatomic) HTSLiveUser sugarDaddy;
@property (nonatomic) BOOL hasSugarDaddy;
@property (nonatomic) HTSLiveUser anchor;
@property (nonatomic) BOOL hasAnchor;
@property (nonatomic) HTSLiveImage cover;
@property (nonatomic) BOOL hasCover;
+ (id)descriptor;
@end
