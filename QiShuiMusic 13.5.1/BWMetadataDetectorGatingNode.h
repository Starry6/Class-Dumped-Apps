@interface BWMetadataDetectorGatingNode : BWFanOutNode
@property (nonatomic) BWNodeOutput mrcOutput;
@property (nonatomic) BWNodeOutput appClipCodeOutput;
@property (nonatomic) BWNodeOutput textLocalizationOutput;
@property (nonatomic) <BWMetadataDetectedResultsObserver> mrcResultsObserver;
@property (nonatomic) <BWMetadataDetectedResultsObserver> appClipCodeResultsObserver;
@property (nonatomic) <BWMetadataDetectedResultsObserver> textLocalizationResultsObserver;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)textLocalizationResultsObserver;
- (id)nodeType;
- (void)didSelectFormat:forInput:;
- (id)initWithSceneClassifierVersion:mrcEnabled:appClipCodeEnabled:textLocalizationEnabled:lowPowerModeEnabled:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (id)initWithMRCEnabled:appClipCodeEnabled:textLocalizationEnabled:lowPowerModeEnabled:;
- (id)mrcResultsObserver;
- (void)renderSampleBuffer:forInput:;
- (id)appClipCodeResultsObserver;
- (id)textLocalizationOutput;
- (void)sceneDidChangeQRConfidence:appClipCodeConfidence:documentConfidence:textConfidence:;
- (id)appClipCodeOutput;
- (id)nodeSubType;
- (id)mrcOutput;
@end
