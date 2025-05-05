@interface FigCaptureAudioFileRecordingSettings : FigCaptureRecordingSettings
@property (nonatomic) NSDictionary audioSettings;
@property (nonatomic) NSArray metadata;
- (id)init;
- (void)dealloc;
- (id)metadata;
- (id)initWithCoder:;
- (void)setMetadata:;
- (void)encodeWithCoder:;
- (id)description;
- (void)setAudioSettings:;
- (id)audioSettings;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
