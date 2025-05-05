@interface AWDMDNSResponderResolveStatsHostname : PBCodable
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray results;
- (void)dealloc;
- (void)setName:;
- (BOOL)hasName;
- (void)writeTo:;
- (unsigned long long)resultsCount;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)clearResults;
- (void)mergeFrom:;
- (id)results;
- (BOOL)readFrom:;
- (id)description;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setResults:;
- (id)copyWithZone:;
- (id)resultAtIndex:;
- (void)addResult:;
+ (Class)resultType;
@end
