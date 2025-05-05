@interface VCMediaNegotiatorAudioConfiguration : NSObject
@property (nonatomic) I ssrc;
@property (nonatomic) BOOL allowAudioSwitching;
@property (nonatomic) BOOL allowAudioRecording;
@property (nonatomic) BOOL useSBR;
@property (nonatomic) I audioUnitNumber;
@property (nonatomic) NSSet audioPayloads;
- (void)dealloc;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned int)ssrc;
- (void)setSsrc:;
- (BOOL)useSBR;
- (void)setUseSBR:;
- (BOOL)allowAudioRecording;
- (void)setAllowAudioRecording:;
- (BOOL)allowAudioSwitching;
- (void)setAllowAudioSwitching:;
- (id)audioPayloads;
- (id)initWithAllowAudioSwitching:allowAudioRecording:useSBR:ssrc:audioUnitNumber:;
- (id)initWithAllowAudioSwitching:allowAudioRecording:useSBR:ssrc:audioUnitNumber:audioRuleCollection:;
- (void)addAudioPayload:isSecondary:;
- (BOOL)isSecondaryPayload:;
- (unsigned int)audioUnitNumber;
- (void)setAudioUnitNumber:;
@end
