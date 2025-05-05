@interface AWDITesterTestStart : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasTestName;
@property (nonatomic) NSString testName;
@property (nonatomic) BOOL hasUniqueKey;
@property (nonatomic) NSString uniqueKey;
- (void)setTestName:;
- (id)uniqueKey;
- (void)dealloc;
- (id)testName;
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
- (void)setUniqueKey:;
- (BOOL)hasTestName;
- (BOOL)hasUniqueKey;
@end
