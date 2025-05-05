@interface FLOWSchemaFLOWMediaPlayerPlaylistContext : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger playlistSubtype;
@property (nonatomic) BOOL hasPlaylistSubtype;
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
- (void)setPlaylistSubtype:;
- (BOOL)hasPlaylistSubtype;
- (void)setHasPlaylistSubtype:;
- (void)deletePlaylistSubtype;
- (int)playlistSubtype;
@end
