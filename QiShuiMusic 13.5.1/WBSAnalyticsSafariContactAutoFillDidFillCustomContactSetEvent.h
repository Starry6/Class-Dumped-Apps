@interface WBSAnalyticsSafariContactAutoFillDidFillCustomContactSetEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasIsShowingMeCardSets;
@property (nonatomic) BOOL isShowingMeCardSets;
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
- (void)setIsShowingMeCardSets:;
- (void)setHasIsShowingMeCardSets:;
- (BOOL)hasIsShowingMeCardSets;
- (BOOL)isShowingMeCardSets;
@end
