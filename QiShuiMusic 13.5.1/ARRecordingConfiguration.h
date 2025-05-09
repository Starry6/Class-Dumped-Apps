@interface ARRecordingConfiguration : ARCustomTechniquesConfiguration
@property (nonatomic) Q state;
@property (nonatomic) <ARRecordingTechniqueProtocol> recordingTechnique;
@property (nonatomic) @? finishBlock;
@property (nonatomic) NSURL fileURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoFormat;
- (void)setState:;
- (id)initPrivate;
- (unsigned long long)state;
- (void)startRecording;
- (void).cxx_destruct;
- (id)fileURL;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setVideoFormat:;
- (long long)worldAlignment;
- (id)parentImageSensorSettings;
- (id)imageSensorSettings;
- (id)secondaryTechniques;
- (void)technique:didFinishWithResult:;
- (void)abortRecording;
- (id)initWithBaseConfiguration:fileURL:;
- (id)initWithBaseConfiguration:recordingTechnique:;
- (id)recordingTechnique;
- (void)finishRecordingWithHandler:;
- (void)ensureTechniqueAndCustomSensorCompatibility;
- (void)setRecordingTechnique:;
- (id)finishBlock;
- (void)setFinishBlock:;
+ (BOOL)isSupported;
+ (BOOL)supportsFrameSemantics:;
@end
