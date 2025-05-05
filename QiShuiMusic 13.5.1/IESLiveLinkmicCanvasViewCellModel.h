@interface IESLiveLinkmicCanvasViewCellModel : NSObject
@property (nonatomic) @? onUserUpdateBlock;
@property (nonatomic) @? onSessionViewUpdatedBlock;
@property (nonatomic) IESLiveLinkmicCanvasSlotLayoutConfig slotConfig;
@property (nonatomic) NSString cellIdentifier;
@property (nonatomic) <IESLiveInteractUserModel> user;
- (void)insertRTCSessionView:isLocalPreview:;
- (void)onSessionViewUpdated:;
- (id)onSessionViewUpdatedBlock;
- (id)onUserUpdateBlock;
- (void)onUserUpdated:;
- (void)setOnSessionViewUpdatedBlock:;
- (void)setOnUserUpdateBlock:;
- (void)setSlotConfig:;
- (id)slotConfig;
- (void)setUser:;
- (id)user;
- (void).cxx_destruct;
- (id)cellIdentifier;
@end
