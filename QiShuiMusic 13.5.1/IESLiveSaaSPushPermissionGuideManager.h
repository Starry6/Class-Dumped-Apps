@interface IESLiveSaaSPushPermissionGuideManager : NSObject
@property (nonatomic) IESLiveSaaSPushPermissionGuideView pushGuideView;
@property (nonatomic) NSString sourceStr;
@property (nonatomic) BOOL jumpToSystemSettingFlag;
- (void)clickLivePushGuidePanel;
- (void)didApplicationDidBecomeActive:;
- (void)dismissPushGudieView;
- (void)handleDidBecomeActiveTrack;
- (void)handleOpenPushStatus:;
- (void)handlePushAndShowGuidePanelIfNeed:;
- (BOOL)jumpToSystemSettingFlag;
- (BOOL)needShowPushGuidePanel;
- (void)openPushGuidePanel;
- (id)pushGuideView;
- (void)setJumpToSystemSettingFlag:;
- (void)setPushGuideView:;
- (void)setSourceStr:;
- (void)setupNTF;
- (void)showPushGuidePanelTimeSave;
- (id)sourceStr;
- (void)trackWithEventType:;
- (id)init;
- (void).cxx_destruct;
+ (id)shared;
@end
