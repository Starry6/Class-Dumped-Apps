@interface IESLiveInnerPbPortalInvite : GPBMessage
@property (nonatomic) q inviteCountDown;
@property (nonatomic) q rewardCountDown;
@property (nonatomic) IESLiveInnerPbUser sugarDaddy;
@property (nonatomic) BOOL hasSugarDaddy;
@property (nonatomic) IESLiveInnerPbUser anchor;
@property (nonatomic) BOOL hasAnchor;
@property (nonatomic) IESLiveInnerPbImage cover;
@property (nonatomic) BOOL hasCover;
+ (id)descriptor;
@end
