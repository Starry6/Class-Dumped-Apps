@interface AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithOutputSettingsPreset:;
- (long long)averageBitRateForSourceFormatDescription:andTargetFrameRate:andEncoderSpecification:;
- (id)colorSpaceFromSourceFormatDescriptions:andRendererColorSpace:;
@end
