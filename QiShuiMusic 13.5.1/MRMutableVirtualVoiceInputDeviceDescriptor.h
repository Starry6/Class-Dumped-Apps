@interface MRMutableVirtualVoiceInputDeviceDescriptor : MRVirtualVoiceInputDeviceDescriptor
@property (nonatomic) NSArray supportedFormats;
@property (nonatomic) NSDictionary defaultFormat;
- (void)setSupportedFormats:;
- (void)setDefaultFormat:;
@end
