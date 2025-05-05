@interface IESLiveRevenueInteractBizConfig : NSObject
@property (nonatomic) NSString openGameId;
@property (nonatomic) NSNumber bizType;
@property (nonatomic) NSNumber inviteType;
@property (nonatomic) BOOL isAccept;
@property (nonatomic) NSString inviterId;
@property (nonatomic) NSNumber toUid;
@property (nonatomic) NSDictionary trackParams;
- (void)setTrackParams:;
- (id)bizType;
- (id)inviteType;
- (BOOL)isAccept;
- (id)logParams;
- (id)openGameId;
- (void)setBizType:;
- (void)setInviteType:;
- (void)setIsAccept:;
- (void)setOpenGameId:;
- (void)setToUid:;
- (id)toUid;
- (id)trackParams;
- (void).cxx_destruct;
- (id)inviterId;
- (void)setInviterId:;
@end
