@interface MIPAlbum : PBCodable
@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) q storeId;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasSortName;
@property (nonatomic) NSString sortName;
@property (nonatomic) BOOL hasArtist;
@property (nonatomic) MIPArtist artist;
@property (nonatomic) BOOL hasNumTracks;
@property (nonatomic) NSInteger numTracks;
@property (nonatomic) BOOL hasNumDiscs;
@property (nonatomic) NSInteger numDiscs;
@property (nonatomic) BOOL hasArtworkId;
@property (nonatomic) NSString artworkId;
@property (nonatomic) BOOL hasUserRating;
@property (nonatomic) NSInteger userRating;
@property (nonatomic) BOOL hasCompilation;
@property (nonatomic) BOOL compilation;
@property (nonatomic) BOOL hasPersistentId;
@property (nonatomic) q persistentId;
@property (nonatomic) BOOL hasCloudId;
@property (nonatomic) NSString cloudId;
- (id)artist;
- (void)setArtist:;
- (void)setName:;
- (BOOL)hasName;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (BOOL)hasArtist;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)userRating;
- (void)setUserRating:;
- (BOOL)hasStoreId;
- (void)setCompilation:;
- (long long)storeId;
- (BOOL)compilation;
- (id)sortName;
- (void)setStoreId:;
- (void)setHasUserRating:;
- (BOOL)hasUserRating;
- (long long)persistentId;
- (void)setHasStoreId:;
- (void)setPersistentId:;
- (void)setHasPersistentId:;
- (BOOL)hasPersistentId;
- (BOOL)hasSortName;
- (void)setSortName:;
- (BOOL)hasArtworkId;
- (id)artworkId;
- (void)setArtworkId:;
- (void)setNumTracks:;
- (void)setHasNumTracks:;
- (BOOL)hasNumTracks;
- (void)setNumDiscs:;
- (void)setHasNumDiscs:;
- (BOOL)hasNumDiscs;
- (void)setHasCompilation:;
- (BOOL)hasCompilation;
- (BOOL)hasCloudId;
- (int)numTracks;
- (int)numDiscs;
- (id)cloudId;
- (void)setCloudId:;
@end
