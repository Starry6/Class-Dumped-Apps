@interface VNImageBasedRequest : VNRequest
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} regionOfInterest;
@property (nonatomic) NSArray inputFaceObservations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray inputDetectedObjectObservations;
@property (nonatomic) NSArray supportedImageSizeSet;
- (BOOL)_configureRequestWithRevision:;
- (void)applyConfigurationOfRequest:;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (id)description;
- (void)setInputFaceObservations:;
- (id)inputFaceObservations;
- (BOOL)getOptionalValidatedInputFaceObservations:clippedToRegionOfInterest:error:;
- (id)inputDetectedObjectObservations;
- (void)setInputDetectedObjectObservations:;
- (BOOL)validateConfigurationAndReturnError:;
- (id)supportedImageSizeSet;
- (id)regionOfInterest;
- (void)setRegionOfInterest:;
- (BOOL)getOptionalValidatedInputDetectedObjectObservations:forObservationClass:relationWithRegionOfInterest:error:;
- (BOOL)isFullCoverageRegionOfInterest;
- (id)regionOfInterestNonIntegralPixelRectForWidth:height:;
- (id)regionOfInterestPixelRectForWidth:height:;
- (id)_faceObservationsForRegionOfInterestContainingFaceObservations:;
- (id)_detectedObjectObservationsForRegionOfInterestContainingDetectedObjectObservations:relationWithRegionOfInterest:;
+ (BOOL)_allowANE;
+ (id)vcp_sceneRequestWithRequestClass:andRevision:;
+ (Class)configurationClass;
@end
