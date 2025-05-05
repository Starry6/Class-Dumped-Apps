@interface WBSAnalyticsSafariUnableToSilentlyMigrateToCKBookmarksEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) Q reasonsCount;
@property (nonatomic) ^i reasons;
- (void)dealloc;
- (void)writeTo:;
- (id)reasons;
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
- (void)addReason:;
- (unsigned long long)reasonsCount;
- (void)clearReasons;
- (int)reasonAtIndex:;
- (void)setReasons:count:;
- (id)reasonsAsString:;
- (int)StringAsReasons:;
@end
