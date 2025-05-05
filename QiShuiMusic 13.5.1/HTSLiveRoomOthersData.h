@interface HTSLiveRoomOthersData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveDecotationDetail decoDetail;
@property (nonatomic) BOOL hasDecoDetail;
@property (nonatomic) HTSLiveMorePanelData morePanelInfo;
@property (nonatomic) BOOL hasMorePanelInfo;
@property (nonatomic) HTSLiveAppointmentData appointmentInfo;
@property (nonatomic) BOOL hasAppointmentInfo;
@property (nonatomic) HTSLiveWebSkinData webSkin;
@property (nonatomic) BOOL hasWebSkin;
@property (nonatomic) HTSLiveWebProgramme programme;
@property (nonatomic) BOOL hasProgramme;
@property (nonatomic) HTSLiveLiveMatrixInfo liveMatrixInfo;
@property (nonatomic) BOOL hasLiveMatrixInfo;
@property (nonatomic) HTSLiveWebLivePortOptimization webLivePortOptimization;
@property (nonatomic) BOOL hasWebLivePortOptimization;
@property (nonatomic) HTSLiveGiftPanelTopperTray giftPanelTopperTray;
@property (nonatomic) BOOL hasGiftPanelTopperTray;
@property (nonatomic) HTSLiveEnterGiftAnimation enterGiftAnimation;
@property (nonatomic) BOOL hasEnterGiftAnimation;
@property (nonatomic) HTSLiveGroupLiveData groupLiveData;
@property (nonatomic) BOOL hasGroupLiveData;
@property (nonatomic) HTSLiveAnchorBottomToolBar anchorBottomToolBar;
@property (nonatomic) BOOL hasAnchorBottomToolBar;
+ (id)descriptor;
@end
