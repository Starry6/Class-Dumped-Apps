@interface TRITrialFactorFields : PBCodable
@property (nonatomic) BOOL hasClientFactorPackId;
@property (nonatomic) NSString clientFactorPackId;
@property (nonatomic) BOOL hasNamespaceName;
@property (nonatomic) NSString namespaceName;
- (id)clientFactorPackId;
- (id)namespaceName;
- (BOOL)hasClientFactorPackId;
- (void)writeTo:;
- (void)setNamespaceName:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setClientFactorPackId:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasNamespaceName;
- (id)copyWithZone:;
@end
