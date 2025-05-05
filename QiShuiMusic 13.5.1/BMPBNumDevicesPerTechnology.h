@interface BMPBNumDevicesPerTechnology : PBCodable
@property (nonatomic) BOOL hasTechnologyString;
@property (nonatomic) NSString technologyString;
@property (nonatomic) BOOL hasNumber;
@property (nonatomic) NSInteger number;
- (int)number;
- (BOOL)hasNumber;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setNumber:;
- (void)mergeFrom:;
- (void)setHasNumber:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasTechnologyString;
- (id)technologyString;
- (void)setTechnologyString:;
@end
