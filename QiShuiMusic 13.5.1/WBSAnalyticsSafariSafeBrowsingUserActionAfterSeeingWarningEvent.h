@interface WBSAnalyticsSafariSafeBrowsingUserActionAfterSeeingWarningEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) NSInteger action;
- (void)writeTo:;
- (int)action;
- (unsigned long long)hash;
- (void)setAction:;
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
- (BOOL)hasAction;
- (void)setHasAction:;
- (id)actionAsString:;
- (int)StringAsAction:;
@end
