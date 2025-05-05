@interface IESLiveInnerPbPortalMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q type;
@property (nonatomic) q portalId;
@property (nonatomic) q roomId;
@property (nonatomic) IESLiveInnerPbPortalBuy portalBuy;
@property (nonatomic) BOOL hasPortalBuy;
@property (nonatomic) IESLiveInnerPbPortalInvite portalInvite;
@property (nonatomic) BOOL hasPortalInvite;
@property (nonatomic) IESLiveInnerPbPortalFinish portalFinish;
@property (nonatomic) BOOL hasPortalFinish;
@property (nonatomic) Portal portal;
@property (nonatomic) BOOL hasPortal;
@property (nonatomic) q nextPingTime;
+ (id)descriptor;
@end
