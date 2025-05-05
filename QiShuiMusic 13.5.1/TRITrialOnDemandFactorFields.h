@interface TRITrialOnDemandFactorFields : PBCodable
@property (nonatomic) BOOL hasFactorName;
@property (nonatomic) NSString factorName;
@property (nonatomic) BOOL hasNamespaceName;
@property (nonatomic) NSString namespaceName;
- (id)namespaceName;
- (void)writeTo:;
- (void)setNamespaceName:;
- (unsigned long long)hash;
- (void)setFactorName:;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)hasFactorName;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)factorName;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasNamespaceName;
- (id)copyWithZone:;
@end
