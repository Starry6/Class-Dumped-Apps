@interface IESLiveIntimateChatSlotView : UIView
@property (nonatomic) HTSGuestInfoView infoView;
@property (nonatomic) BOOL isStrongRemindView;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL isConnecting;
@property (nonatomic) BOOL isPreView;
- (void)addStrongRemindView:;
- (void)fitOutGuestInfoView:;
- (BOOL)isPreView;
- (BOOL)isSameStrongRemindWithUser:;
- (BOOL)isStrongRemindView;
- (void)removeStrongRemindView;
- (void)setIsPreView:;
- (void)setIsStrongRemindView:;
- (void)setUser:;
- (BOOL)isConnecting;
- (id)user;
- (void).cxx_destruct;
- (id)infoView;
- (void)setInfoView:;
- (void)setIsConnecting:;
@end
