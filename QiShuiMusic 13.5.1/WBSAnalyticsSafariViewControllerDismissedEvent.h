@interface WBSAnalyticsSafariViewControllerDismissedEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasMethod;
@property (nonatomic) NSInteger method;
- (int)method;
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
- (void)setMethod:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasMethod:;
- (BOOL)hasMethod;
- (id)methodAsString:;
- (int)StringAsMethod:;
@end
