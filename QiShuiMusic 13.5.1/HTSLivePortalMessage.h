@interface HTSLivePortalMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q type;
@property (nonatomic) q portalId;
@property (nonatomic) q roomId;
@property (nonatomic) HTSLivePortalBuy portalBuy;
@property (nonatomic) BOOL hasPortalBuy;
@property (nonatomic) HTSLivePortalInvite portalInvite;
@property (nonatomic) BOOL hasPortalInvite;
@property (nonatomic) HTSLivePortalFinish portalFinish;
@property (nonatomic) BOOL hasPortalFinish;
@property (nonatomic) Portal portal;
@property (nonatomic) BOOL hasPortal;
@property (nonatomic) q nextPingTime;
+ (id)descriptor;
@end
