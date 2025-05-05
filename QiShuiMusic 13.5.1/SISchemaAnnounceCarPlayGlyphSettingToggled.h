@interface SISchemaAnnounceCarPlayGlyphSettingToggled : SISchemaInstrumentationMessage
@property (nonatomic) BOOL announcementsMuted;
@property (nonatomic) BOOL hasAnnouncementsMuted;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setAnnouncementsMuted:;
- (BOOL)hasAnnouncementsMuted;
- (void)setHasAnnouncementsMuted:;
- (void)deleteAnnouncementsMuted;
- (BOOL)announcementsMuted;
@end
