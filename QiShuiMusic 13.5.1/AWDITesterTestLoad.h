@interface AWDITesterTestLoad : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) NSMutableArray testNames;
- (void)setTestNames:;
- (void)dealloc;
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
- (id)testNames;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearTestNames;
- (void)addTestNames:;
- (unsigned long long)testNamesCount;
- (id)testNamesAtIndex:;
+ (Class)testNamesType;
@end
