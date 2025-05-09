@interface MIPPodcast : PBCodable
@property (nonatomic) BOOL hasArtist;
@property (nonatomic) MIPArtist artist;
@property (nonatomic) BOOL hasSeries;
@property (nonatomic) MIPSeries series;
@property (nonatomic) BOOL hasExternalGuid;
@property (nonatomic) NSString externalGuid;
@property (nonatomic) BOOL hasFeedUrl;
@property (nonatomic) NSString feedUrl;
- (id)artist;
- (void)setArtist:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (BOOL)hasArtist;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)series;
- (id)feedUrl;
- (void)setFeedUrl:;
- (BOOL)hasSeries;
- (void)setSeries:;
- (BOOL)hasExternalGuid;
- (BOOL)hasFeedUrl;
- (id)externalGuid;
- (void)setExternalGuid:;
@end
