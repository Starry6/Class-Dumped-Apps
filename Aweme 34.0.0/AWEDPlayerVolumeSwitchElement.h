@interface AWEDPlayerVolumeSwitchElement : AWEDPlayerInteractionBaseElement
@property (nonatomic) NSNumber volumeHandlerID;
- (void)initializeElement;
- (id)activateInfoWithData:;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (id)activateInfoForSimplePlayerWithVideoModel:;
- (void)updateVolumeSwitch;
- (void)setVolumeHandlerID:;
- (id)volumeHandlerID;
- (void)dealloc;
- (void)setData:;
- (void).cxx_destruct;
@end
