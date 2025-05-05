@interface MKDebugLocationConsole : UILabel
@property (nonatomic) Q pageIndex;
@property (nonatomic) BOOL customTextEnabled;
- (void)setText:;
- (void)setPageIndex:;
- (void).cxx_destruct;
- (unsigned long long)pageIndex;
- (void)update;
- (void)_consoleTapped:;
- (id)initWithMapView:;
- (void)updateFrameWithEdgeInsets:;
- (void)updateCustomText:textColor:;
- (void)_updateGPSInfo;
- (void)_updateVehicleInfo;
- (void)_updateCustomText;
- (id)_debugViewFrameWithMapView:;
- (void)_showNextPage;
- (id)timeStampFormatter;
- (BOOL)customTextEnabled;
- (void)setCustomTextEnabled:;
@end
