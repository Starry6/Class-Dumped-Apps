@interface BDCTStillLivenessTC : LivenessTC
@property (nonatomic) FaceLiveModule faceliveInstance;
@property (nonatomic) FaceLiveViewController faceLiveViewController;
- (void)updateProgress:prompt:animated:;
- (id)doFaceLive:orient:;
- (id)faceLiveViewController;
- (id)faceliveInstance;
- (int)getAlgoErrorCode;
- (id)getLivenessErrorTitle:;
- (id)initWithVC:;
- (void)reStart:;
- (void)setFaceLiveViewController:;
- (void)setFaceliveInstance:;
- (int)setInitParams:;
- (void)setMaskRadiusRatio:offsetToCenterRatio:;
- (int)setParamsGeneral:value:;
- (void)trackCancel;
- (void)viewDismiss;
- (BOOL)stop:;
- (void)start;
- (BOOL)stop;
- (void).cxx_destruct;
@end
