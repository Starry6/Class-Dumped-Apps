@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject
@property (nonatomic) NSDictionary baseAudioSettings;
@property (nonatomic) NSDictionary baseVideoSettings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)baseAudioSettings;
- (id)baseVideoSettings;
- (id)initWithOutputSettingsPreset:;
@end
