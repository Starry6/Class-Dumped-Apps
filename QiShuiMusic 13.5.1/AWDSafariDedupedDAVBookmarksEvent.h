@interface AWDSafariDedupedDAVBookmarksEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasDedupeCount;
@property (nonatomic) Q dedupeCount;
@property (nonatomic) BOOL hasFoldersWithDupesCount;
@property (nonatomic) Q foldersWithDupesCount;
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
- (void)setDedupeCount:;
- (void)setHasDedupeCount:;
- (BOOL)hasDedupeCount;
- (void)setFoldersWithDupesCount:;
- (void)setHasFoldersWithDupesCount:;
- (BOOL)hasFoldersWithDupesCount;
- (unsigned long long)dedupeCount;
- (unsigned long long)foldersWithDupesCount;
@end
