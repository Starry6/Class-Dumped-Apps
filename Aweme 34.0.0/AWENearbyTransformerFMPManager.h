@interface AWENearbyTransformerFMPManager : AWENearbyFMPBaseManager
@property (nonatomic) BOOL transformerFMPSdkSuccess;
@property (nonatomic) NSString transformerFMPSdkResult;
@property (nonatomic) BOOL transformerGeckoExist;
@property (nonatomic) BOOL isSkyLightShow;
- (void)transformerRequestFail;
- (void)transformerRequestEmpty;
- (void)transformerDidShowParams:renderTime:error:;
- (void)setTransformerFMPSdkResult:;
- (id)transformerFMPSdkResult;
- (void)setTransformerFMPSdkSuccess:;
- (void)setTransformerGeckoExist:;
- (BOOL)transformerGeckoExist;
- (BOOL)transformerFMPSdkSuccess;
- (void)willShowSkyLightGeckoExist:;
- (void)willDissappear;
- (void)skylightDidShow;
- (void)trackerDSLFmpWithParams:;
- (BOOL)isSkyLightShow;
- (void)setIsSkyLightShow:;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:;
+ (id)sharedInstance;
@end
