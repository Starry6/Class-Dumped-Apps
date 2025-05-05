@interface IESLiveListUserLinkmicContent : IESLivePBBaseMessage
@property (nonatomic) q resourceId;
@property (nonatomic) BOOL showIdentity;
@property (nonatomic) NSInteger pkUserRole;
@property (nonatomic) NSString gameName;
@property (nonatomic) NSString fanTicket;
@property (nonatomic) q joinChannelTime;
@property (nonatomic) IESLiveAnchorLinkmicIDInfo anchorLinkmicIdInfo;
@property (nonatomic) BOOL hasAnchorLinkmicIdInfo;
@property (nonatomic) NSInteger anchorAuthRole;
+ (id)descriptor;
@end
