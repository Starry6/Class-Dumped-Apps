@interface GEOSearchAttributionManifest : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasSourceURL;
@property (nonatomic) NSString sourceURL;
- (id)init;
- (void)setSourceURL:;
- (id)jsonRepresentation;
- (id)sourceURL;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setHasTimestamp:;
- (BOOL)hasTimestamp;
- (BOOL)hasSourceURL;
- (void)setTimestamp:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (double)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
