@interface IESLiveInteractionLinkSessionParamsStoreageImpl : NSObject
@property (nonatomic) BOOL hasCreateParams;
@property (nonatomic) IESLiveInteractionLinkerCreateParams createParams;
@property (nonatomic) BOOL hasCloseParams;
@property (nonatomic) IESLiveInteractionLinkerCloseParams closeParams;
@property (nonatomic) BOOL hasLeaveParams;
@property (nonatomic) IESLiveInteractionLinkerLeaveParams leaveParams;
@property (nonatomic) BOOL hasApplyParams;
@property (nonatomic) IESLiveInteractionLinkerApplyParams applyParams;
@property (nonatomic) BOOL hasCancelApplyParams;
@property (nonatomic) IESLiveInteractionLinkerParams cancelApplyParams;
@property (nonatomic) BOOL hasReplyParams;
@property (nonatomic) IESLiveInteractionLinkerReplyParams replyParams;
@property (nonatomic) BOOL hasInviteParams;
@property (nonatomic) IESLiveInteractionLinkerInviteParams inviteParams;
@property (nonatomic) BOOL hasPermitParams;
@property (nonatomic) IESLiveInteractionLinkerPermitParams permitParams;
@property (nonatomic) BOOL hasKickoutParams;
@property (nonatomic) IESLiveInteractionLinkerKickoutParams kickoutParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasCreateParams;
- (BOOL)hasInviteParams;
- (void)setLeaveParams:;
- (void)setReplyParams:;
- (BOOL)hasPermitParams;
- (void)setApplyParams:;
- (void)setCloseParams:;
- (id)applyParams;
- (id)cancelApplyParams;
- (id)closeParams;
- (BOOL)hasApplyParams;
- (BOOL)hasCancelApplyParams;
- (BOOL)hasCloseParams;
- (BOOL)hasKickoutParams;
- (BOOL)hasLeaveParams;
- (BOOL)hasReplyParams;
- (id)inviteParams;
- (id)kickoutParams;
- (id)leaveParams;
- (id)permitParams;
- (id)replyParams;
- (void)setCancelApplyParams:;
- (void)setHasApplyParams:;
- (void)setHasCancelApplyParams:;
- (void)setHasCloseParams:;
- (void)setHasCreateParams:;
- (void)setHasInviteParams:;
- (void)setHasKickoutParams:;
- (void)setHasLeaveParams:;
- (void)setHasPermitParams:;
- (void)setHasReplyParams:;
- (void)setInviteParams:;
- (void)setKickoutParams:;
- (void)setPermitParams:;
- (void).cxx_destruct;
- (id)createParams;
- (void)setCreateParams:;
@end
