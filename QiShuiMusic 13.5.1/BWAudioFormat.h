@interface BWAudioFormat : BWFormat
@property (nonatomic) ^{opaqueCMFormatDescription=} audioFormatDescription;
@property (nonatomic) NSDictionary audioCompressionSBPOptions;
- (unsigned int)mediaType;
- (id)formatDescription;
- (void)dealloc;
- (id)audioCompressionSBPOptions;
- (id)debugDescription;
- (id)audioFormatDescription;
- (id)description;
+ (id)formatForAVAudioSettings:inputFormat:;
+ (BOOL)compressionOptionTrimSampleBufferDurationsIsRequiredForAudioSettings:;
+ (id)formatWithAudioFormatDescription:;
@end
