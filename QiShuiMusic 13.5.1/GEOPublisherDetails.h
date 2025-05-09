@interface GEOPublisherDetails : PBCodable
@property (nonatomic) Q publisherIdsCount;
@property (nonatomic) ^Q publisherIds;
@property (nonatomic) BOOL hasCurrentlyFollowing;
@property (nonatomic) BOOL currentlyFollowing;
- (void)readAll:;
- (void)dealloc;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)publisherIds;
- (void)clearPublisherIds;
- (void)addPublisherId:;
- (unsigned long long)publisherIdsCount;
- (unsigned long long)publisherIdAtIndex:;
- (void)setPublisherIds:count:;
- (BOOL)currentlyFollowing;
- (void)setCurrentlyFollowing:;
- (void)setHasCurrentlyFollowing:;
- (BOOL)hasCurrentlyFollowing;
+ (BOOL)isValid:;
@end
