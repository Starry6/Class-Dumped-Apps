@interface NRPBDeviceCollectionDiff : PBCodable
@property (nonatomic) NSMutableArray pairingIDs;
@property (nonatomic) NSMutableArray diffs;
- (void)clearPairingIDs;
- (void)writeTo:;
- (void)addPairingIDs:;
- (unsigned long long)hash;
- (id)pairingIDsAtIndex:;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (unsigned long long)pairingIDsCount;
- (void)setPairingIDs:;
- (id)dictionaryRepresentation;
- (id)pairingIDs;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)diffs;
- (void)clearDiffs;
- (void)addDiffs:;
- (unsigned long long)diffsCount;
- (id)diffsAtIndex:;
- (void)setDiffs:;
+ (Class)pairingIDsType;
+ (Class)diffsType;
@end
