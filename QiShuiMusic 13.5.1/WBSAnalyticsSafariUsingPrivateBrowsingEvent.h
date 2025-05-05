@interface WBSAnalyticsSafariUsingPrivateBrowsingEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasInPrivateBrowsing;
@property (nonatomic) BOOL inPrivateBrowsing;
- (void)setInPrivateBrowsing:;
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
- (void)setHasInPrivateBrowsing:;
- (id)dictionaryRepresentation;
- (BOOL)hasInPrivateBrowsing;
- (BOOL)isEqual:;
- (BOOL)inPrivateBrowsing;
- (id)copyWithZone:;
@end
