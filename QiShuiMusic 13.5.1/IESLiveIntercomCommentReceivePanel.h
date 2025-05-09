@interface IESLiveIntercomCommentReceivePanel : HTSLivePopUpView
@property (nonatomic) BOOL isNotReceive;
@property (nonatomic) UIButton notReceiveButton;
@property (nonatomic) NSNumber channelID;
@property (nonatomic) IESLiveCountTimer countTimer;
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) UIButton rejectButton;
@property (nonatomic) HTSLiveInteractiveAPIV2 interactionAPI;
@property (nonatomic) @? replySuccessBlock;
- (void)setupCountTimer;
- (id)countTimer;
- (void)didTapNotReceiveButton;
- (void)didTapReceiveButton;
- (void)didTapRejectButton;
- (id)initWithFrame:roomModel:channelID:DIContext:;
- (id)interactionAPI;
- (BOOL)isNotReceive;
- (BOOL)needShowInstruction:;
- (id)notReceiveButton;
- (void)onClickHelpIconButton;
- (void)replyIntercomCommentWithReplyType:;
- (id)replySuccessBlock;
- (void)setCountTimer:;
- (void)setInteractionAPI:;
- (void)setIsNotReceive:;
- (void)setNotReceiveButton:;
- (void)setReplySuccessBlock:;
- (void)trackWithEvent:extra:;
- (void)setChannelID:;
- (void)hide;
- (void)cancelTimer;
- (void).cxx_destruct;
- (id)channelID;
- (void)setupUI;
- (id)room;
- (void)setRoom:;
- (id)rejectButton;
- (void)setRejectButton:;
@end
