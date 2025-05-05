@interface AWDCoreRoutineHintSourceUsageSet : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) NSMutableArray instances;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)instances;
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
- (id)instanceAtIndex:;
- (void)setInstances:;
- (unsigned long long)instancesCount;
- (void)addInstance:;
- (void)clearInstances;
+ (Class)instanceType;
@end
