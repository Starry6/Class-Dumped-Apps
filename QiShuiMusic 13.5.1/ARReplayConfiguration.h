@interface ARReplayConfiguration : ARCustomTechniquesConfiguration
@property (nonatomic) NSNumber vioSessionID;
@property (nonatomic) NSURL fileURL;
@property (nonatomic) <ARReplayConfigurationDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)play;
- (id)initPrivate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)fileURL;
- (id)description;
- (void)pause;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)worldAlignment;
- (id)parentImageSensorSettings;
- (id)imageSensorSettings;
- (id)secondaryTechniques;
- (id)imageSensorSettingsForUltraWide;
- (id)vioSessionID;
- (void)replaySensorDidFinishReplayingData;
- (void)ensureTechniqueAndCustomSensorCompatibility;
- (id)initWithBaseConfiguration:fileURL:outError:;
- (id)initWithBaseConfiguration:fileURL:replayMode:outError:;
- (id)initWithBaseConfiguration:replaySensor:;
- (void)setAlwaysUsePrimaryCameraForHiResOrX420VideoFormat;
- (id)initWithBaseConfiguration:replaySensor:replayingResultDataClasses:;
+ (BOOL)supportsFrameSemantics:;
@end
