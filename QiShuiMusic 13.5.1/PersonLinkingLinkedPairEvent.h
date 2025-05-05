@interface PersonLinkingLinkedPairEvent : PBCodable
@property (nonatomic) BOOL hasUserID;
@property (nonatomic) NSString userID;
@property (nonatomic) NSMutableArray pairs;
- (id)userID;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setUserID:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearPairs;
- (id)pairs;
- (void)setPairs:;
- (unsigned long long)pairsCount;
- (BOOL)hasUserID;
- (void)addPairs:;
- (id)pairsAtIndex:;
+ (Class)pairsType;
@end
