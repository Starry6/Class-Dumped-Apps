@interface AWELiveZMCertManager : NSObject
@property (nonatomic) AWELiveVerifyApi vertifyApi;
@property (nonatomic) <IESLiveTracker> tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)baseParams;
- (void)trackWithEvent:params:;
- (void)openByteCertWithParams:completion:;
- (void)openFaceLivingBodyWithParams:withCompletion:;
- (void)openOCRTakePhoto:withCompletion:;
- (void)uploadIDCard:withCompletion:;
- (void)verifyWithModel:zhimaToken:completion:;
- (id)vertifyApi;
- (void)adapter_openOCRTakePhoto:withCompletion:;
- (void)adapter_uploadIDCard:withCompletion:;
- (void)adapter_openFaceLivingBodyWithParams:withCompletion:;
- (id)jsbDictionary:;
- (void)p_faceLivingBodyWithParams:withCompletion:;
- (void)checkVerifyResult:completion:;
- (void)getOptimizationGrayscaleStrategyWithEnterFrom:completion:;
- (void)setVertifyApi:;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
