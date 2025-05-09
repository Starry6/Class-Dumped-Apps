@interface AWDPowerAudioMetrics : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasAudioSpeakerPowerMicroWatt;
@property (nonatomic) I audioSpeakerPowerMicroWatt;
@property (nonatomic) BOOL hasAudioHeadsetPowerMicroWatt;
@property (nonatomic) I audioHeadsetPowerMicroWatt;
@property (nonatomic) BOOL hasAudioSpeakerDuration;
@property (nonatomic) I audioSpeakerDuration;
@property (nonatomic) BOOL hasAudioHeadsetDuration;
@property (nonatomic) I audioHeadsetDuration;
@property (nonatomic) Q audioVolumeLevelDurationsCount;
@property (nonatomic) ^I audioVolumeLevelDurations;
@property (nonatomic) Q audioVolumeLevelDurationSpeakersCount;
@property (nonatomic) ^I audioVolumeLevelDurationSpeakers;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setAudioSpeakerPowerMicroWatt:;
- (void)setHasAudioSpeakerPowerMicroWatt:;
- (BOOL)hasAudioSpeakerPowerMicroWatt;
- (void)setAudioHeadsetPowerMicroWatt:;
- (void)setHasAudioHeadsetPowerMicroWatt:;
- (BOOL)hasAudioHeadsetPowerMicroWatt;
- (void)setAudioSpeakerDuration:;
- (void)setHasAudioSpeakerDuration:;
- (BOOL)hasAudioSpeakerDuration;
- (void)setAudioHeadsetDuration:;
- (void)setHasAudioHeadsetDuration:;
- (BOOL)hasAudioHeadsetDuration;
- (unsigned long long)audioVolumeLevelDurationsCount;
- (id)audioVolumeLevelDurations;
- (void)clearAudioVolumeLevelDurations;
- (void)addAudioVolumeLevelDuration:;
- (unsigned int)audioVolumeLevelDurationAtIndex:;
- (void)setAudioVolumeLevelDurations:count:;
- (unsigned long long)audioVolumeLevelDurationSpeakersCount;
- (id)audioVolumeLevelDurationSpeakers;
- (void)clearAudioVolumeLevelDurationSpeakers;
- (void)addAudioVolumeLevelDurationSpeaker:;
- (unsigned int)audioVolumeLevelDurationSpeakerAtIndex:;
- (void)setAudioVolumeLevelDurationSpeakers:count:;
- (unsigned int)audioSpeakerPowerMicroWatt;
- (unsigned int)audioHeadsetPowerMicroWatt;
- (unsigned int)audioSpeakerDuration;
- (unsigned int)audioHeadsetDuration;
@end
