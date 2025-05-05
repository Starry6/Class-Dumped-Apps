@interface IESLiveInteractionLayoutSlot : IESLiveInteractionLayoutUIObject
@property (nonatomic) Q viewIndex;
@property (nonatomic) q seatIndex;
@property (nonatomic) q serverSeatIndex;
@property (nonatomic) BOOL isMainSlot;
@property (nonatomic) BOOL isAnchorSlot;
@property (nonatomic) <IESLiveInteractUserModel> user;
@property (nonatomic) <IESLiveLinkmicSession> session;
- (long long)serverSeatIndex;
- (BOOL)isAnchorSlot;
- (BOOL)isMainSlot;
- (long long)seatIndex;
- (void)setIsAnchorSlot:;
- (void)setIsMainSlot:;
- (void)setSeatIndex:;
- (void)setServerSeatIndex:;
- (void)setViewIndex:;
- (void)setUser:;
- (void)setSession:;
- (id)user;
- (id)session;
- (void).cxx_destruct;
- (unsigned long long)viewIndex;
@end
