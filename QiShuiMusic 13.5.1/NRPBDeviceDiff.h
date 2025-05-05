@interface NRPBDeviceDiff : PBCodable
@property (nonatomic) NSMutableArray names;
@property (nonatomic) NSMutableArray diffs;
- (void)setNames:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)names;
- (void).cxx_destruct;
- (unsigned long long)namesCount;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)clearNames;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)addNames:;
- (id)namesAtIndex:;
- (id)diffs;
- (void)clearDiffs;
- (void)addDiffs:;
- (unsigned long long)diffsCount;
- (id)diffsAtIndex:;
- (void)setDiffs:;
+ (Class)namesType;
+ (Class)diffsType;
@end
