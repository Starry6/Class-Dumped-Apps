@interface IESLivePublicScreenContext : NSObject
@property (nonatomic) <IESLivePSAttachmentService> attachmentService;
@property (nonatomic) IESLivePublicScreenNotificationCenter notifyCenter;
@property (nonatomic) IESLivePublicScreenInfoModel infoModel;
@property (nonatomic) NSString currentUserID;
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) <IESLivePublicScreenMonitorProtocol> publicScreenMonitor;
@property (nonatomic) NSArray configAttachments;
@property (nonatomic) IESLivePublicScreenNodeStyleConfig nodeStyleConfig;
@property (nonatomic) IESLivePublicScreenDataFlowConfig dataFlowConfig;
@property (nonatomic) BOOL disableUnreadMessageTipView;
- (id)nodeStyleConfig;
- (void)setDisableUnreadMessageTipView:;
- (id)attachmentService;
- (id)availableAttachments;
- (id)availableDataFlowAttachments;
- (void)bindAttachmentService:;
- (void)bindNotificationCenter:;
- (id)configAttachments;
- (id)dataFlowConfig;
- (BOOL)disableUnreadMessageTipView;
- (id)infoModel;
- (id)notifyCenter;
- (id)publicScreenMonitor;
- (void)setAttachmentService:;
- (void)setConfigAttachments:;
- (void)setCurrentUserID:;
- (void)setDataFlowConfig:;
- (void)setInfoModel:;
- (void)setNodeStyleConfig:;
- (void)setNotifyCenter:;
- (void)setPublicScreenMonitor:;
- (void)setTrackContext:;
- (id)trackContext;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (id)currentUserID;
@end
