@interface AWDCoreRoutineLocationAwarenessBasicHistogram : PBCodable
@property (nonatomic) Q countsCount;
@property (nonatomic) ^i counts;
- (id)counts;
- (void)clearCounts;
- (void)dealloc;
- (int)countAtIndex:;
- (void)setCounts:count:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)countsCount;
- (void)addCount:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
