@interface LivenessTC : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)doFaceLive:orient:;
- (int)getAlgoErrorCode;
- (id)getLivenessErrorMsg:;
- (id)getLivenessErrorTitle:;
- (id)initWithVC:;
- (void)reStart:;
- (void)recordSrcVideo:didOutputSampleBuffer:fromConnection:;
- (int)setInitParams:;
- (void)setMaskRadiusRatio:offsetToCenterRatio:;
- (int)setParamsGeneral:value:;
- (void)trackCancel;
- (void)viewDismiss;
@end
