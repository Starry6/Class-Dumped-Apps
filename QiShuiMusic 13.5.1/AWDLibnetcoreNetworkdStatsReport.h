@interface AWDLibnetcoreNetworkdStatsReport : PBCodable
@property (nonatomic) BOOL hasTotalConnectionCount;
@property (nonatomic) Q totalConnectionCount;
@property (nonatomic) BOOL hasTotalSuccessfulConnectionCount;
@property (nonatomic) Q totalSuccessfulConnectionCount;
@property (nonatomic) BOOL hasFallbackConnectionCount;
@property (nonatomic) Q fallbackConnectionCount;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setTotalConnectionCount:;
- (void)setHasTotalConnectionCount:;
- (BOOL)hasTotalConnectionCount;
- (void)setTotalSuccessfulConnectionCount:;
- (void)setHasTotalSuccessfulConnectionCount:;
- (BOOL)hasTotalSuccessfulConnectionCount;
- (void)setFallbackConnectionCount:;
- (void)setHasFallbackConnectionCount:;
- (BOOL)hasFallbackConnectionCount;
- (unsigned long long)totalConnectionCount;
- (unsigned long long)totalSuccessfulConnectionCount;
- (unsigned long long)fallbackConnectionCount;
@end
