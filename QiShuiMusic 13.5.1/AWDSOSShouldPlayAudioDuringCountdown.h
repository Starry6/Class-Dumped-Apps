@interface AWDSOSShouldPlayAudioDuringCountdown : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasShouldPlayAudioDuringCountdown;
@property (nonatomic) BOOL shouldPlayAudioDuringCountdown;
- (void)writeTo:;
- (BOOL)shouldPlayAudioDuringCountdown;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (void)setShouldPlayAudioDuringCountdown:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasShouldPlayAudioDuringCountdown:;
- (BOOL)hasShouldPlayAudioDuringCountdown;
@end
