@interface AWDCFNetworkCacheMetrics : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasTotalBytesWritten;
@property (nonatomic) Q totalBytesWritten;
@property (nonatomic) BOOL hasBundleID;
@property (nonatomic) NSString bundleID;
- (void)dealloc;
- (BOOL)hasBundleID;
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
- (id)bundleID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setBundleID:;
- (void)setTotalBytesWritten:;
- (void)setHasTotalBytesWritten:;
- (BOOL)hasTotalBytesWritten;
- (unsigned long long)totalBytesWritten;
@end
