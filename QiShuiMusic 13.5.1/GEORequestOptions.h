@interface GEORequestOptions : PBCodable
@property (nonatomic) NSArray surchargeTypes;
@property (nonatomic) Q selectedSurchargeTypeIndex;
@property (nonatomic) <GEOSurchargeType> selectedSurchargeType;
- (id)jsonRepresentation;
- (void)writeTo:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)surchargeTypes;
- (unsigned long long)selectedSurchargeTypeIndex;
- (id)selectedSurchargeType;
@end
