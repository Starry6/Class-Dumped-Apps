@interface FTCPPETInteractionLogEvent : PBCodable
@property (nonatomic) Q hashedUserId;
@property (nonatomic) Q snapshotTimestamp;
@property (nonatomic) NSMutableArray interactions;
- (void)writeTo:;
- (unsigned long long)hash;
- (unsigned long long)hashedUserId;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)interactions;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setInteractions:;
- (void)clearInteractions;
- (void)addInteractions:;
- (unsigned long long)interactionsCount;
- (id)interactionsAtIndex:;
- (void)setHashedUserId:;
- (unsigned long long)snapshotTimestamp;
- (void)setSnapshotTimestamp:;
+ (Class)interactionsType;
@end
