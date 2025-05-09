@interface GEOAvailableAnnouncements : PBCodable
@property (nonatomic) NSMutableArray announcements;
@property (nonatomic) BOOL hasLanguageCode;
@property (nonatomic) NSString languageCode;
- (void)readAll:;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (void)setLanguageCode:;
- (BOOL)hasLanguageCode;
- (id)languageCode;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)announcements;
- (void)setAnnouncements:;
- (void)clearAnnouncements;
- (void)addAnnouncement:;
- (unsigned long long)announcementsCount;
- (id)announcementAtIndex:;
+ (BOOL)isValid:;
+ (Class)announcementType;
@end
