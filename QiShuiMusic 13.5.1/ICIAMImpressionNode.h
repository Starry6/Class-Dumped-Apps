@interface ICIAMImpressionNode : PBCodable
@property (nonatomic) BOOL hasImpressionType;
@property (nonatomic) NSString impressionType;
@property (nonatomic) BOOL hasRecoAlgoId;
@property (nonatomic) NSString recoAlgoId;
- (void)setImpressionType:;
- (id)recoAlgoId;
- (void)writeTo:;
- (id)impressionType;
- (unsigned long long)hash;
- (BOOL)hasImpressionType;
- (void)copyTo:;
- (BOOL)hasRecoAlgoId;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setRecoAlgoId:;
- (id)copyWithZone:;
@end
