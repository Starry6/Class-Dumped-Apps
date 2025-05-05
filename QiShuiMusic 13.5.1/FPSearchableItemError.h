@interface FPSearchableItemError : PBCodable
@property (nonatomic) NSInteger domain;
@property (nonatomic) q code;
@property (nonatomic) BOOL hasCustomDomain;
@property (nonatomic) NSString customDomain;
- (void)writeTo:;
- (long long)code;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (int)domain;
- (void)setDomain:;
- (void)setCode:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)domainAsString:;
- (int)StringAsDomain:;
- (BOOL)hasCustomDomain;
- (id)customDomain;
- (void)setCustomDomain:;
+ (id)stringFromError:;
+ (id)errorFromString:;
@end
