@interface CPLRampingResponseResource : PBCodable
@property (nonatomic) BOOL hasResource;
@property (nonatomic) NSString resource;
@property (nonatomic) BOOL hasAllowed;
@property (nonatomic) BOOL allowed;
@property (nonatomic) BOOL hasRetryAfterMillis;
@property (nonatomic) q retryAfterMillis;
- (void)setResource:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)allowed;
- (void).cxx_destruct;
- (id)resource;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setAllowed:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasResource;
- (void)setHasAllowed:;
- (BOOL)hasAllowed;
- (void)setRetryAfterMillis:;
- (void)setHasRetryAfterMillis:;
- (BOOL)hasRetryAfterMillis;
- (long long)retryAfterMillis;
@end
