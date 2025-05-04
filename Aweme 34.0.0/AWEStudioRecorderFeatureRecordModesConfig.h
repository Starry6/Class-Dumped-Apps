@interface AWEStudioRecorderFeatureRecordModesConfig : AWEStudioComposerBaseFeatureConfig
@property (nonatomic) <AWEStudioFeatureFrameRatioItemProtocol> ratioStatusItem;
@property (nonatomic) BOOL shouldUseCustomRecordConfig;
@property (nonatomic) BOOL disableSwipeGesture;
@property (nonatomic) NSArray modeArray;
@property (nonatomic) NSNumber landingModeID;
@property (nonatomic) NSArray showFrameCornerModes;
@property (nonatomic) BOOL disableSorting;
- (id)modeArray;
- (id)ratioStatusItem;
- (void)setRatioStatusItem:;
- (BOOL)shouldUseCustomRecordConfig;
- (void)setShouldUseCustomRecordConfig:;
- (void)setDisableSwipeGesture:;
- (void)setModeArray:;
- (id)landingModeID;
- (void)setLandingModeID:;
- (id)showFrameCornerModes;
- (void)setShowFrameCornerModes:;
- (BOOL)disableSorting;
- (void)setDisableSorting:;
- (void).cxx_destruct;
- (BOOL)disableSwipeGesture;
@end
