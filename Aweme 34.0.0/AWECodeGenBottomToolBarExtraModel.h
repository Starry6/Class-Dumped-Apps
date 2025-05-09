@interface AWECodeGenBottomToolBarExtraModel : NSObject
@property (nonatomic) NSString tabDesc;
@property (nonatomic) NSString typeDesc;
@property (nonatomic) BOOL shouldAutoPopup;
@property (nonatomic) BOOL banBackupAndExit;
@property (nonatomic) NSString disableExtra;
@property (nonatomic) NSString bizLogExtra;
@property (nonatomic) NSString bizData;
@property (nonatomic) NSNumber popupNumThreshold;
@property (nonatomic) NSNumber bottomBarShowNumThreshold;
@property (nonatomic) NSString replaceComponentId;
@property (nonatomic) Q diagnoseStyle;
@property (nonatomic) BOOL forceShowDiagnoseEntrance;
@property (nonatomic) q updateType;
- (void)setBizData:;
- (id)bizData;
- (unsigned long long)diagnoseStyle;
- (void)setDiagnoseStyle:;
- (id)disableExtra;
- (void)setDisableExtra:;
- (id)bizLogExtra;
- (void)setBizLogExtra:;
- (id)tabDesc;
- (void)setTabDesc:;
- (id)typeDesc;
- (void)setTypeDesc:;
- (BOOL)shouldAutoPopup;
- (void)setShouldAutoPopup:;
- (BOOL)banBackupAndExit;
- (void)setBanBackupAndExit:;
- (id)popupNumThreshold;
- (void)setPopupNumThreshold:;
- (id)bottomBarShowNumThreshold;
- (void)setBottomBarShowNumThreshold:;
- (id)replaceComponentId;
- (void)setReplaceComponentId:;
- (BOOL)forceShowDiagnoseEntrance;
- (void)setForceShowDiagnoseEntrance:;
- (void).cxx_destruct;
- (void)setUpdateType:;
- (long long)updateType;
@end
