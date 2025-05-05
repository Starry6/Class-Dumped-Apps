@interface CLPBundleId : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasShortKey;
@property (nonatomic) NSString shortKey;
@property (nonatomic) BOOL hasFullName;
@property (nonatomic) NSString fullName;
- (id)fullName;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setFullName:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (double)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasFullName;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasShortKey;
- (id)shortKey;
- (void)setShortKey:;
@end
