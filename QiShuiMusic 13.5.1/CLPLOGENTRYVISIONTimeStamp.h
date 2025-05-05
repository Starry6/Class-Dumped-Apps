@interface CLPLOGENTRYVISIONTimeStamp : PBCodable
@property (nonatomic) BOOL hasCfAbsoluteTimeS;
@property (nonatomic) double cfAbsoluteTimeS;
@property (nonatomic) BOOL hasMachAbsoluteTimeS;
@property (nonatomic) double machAbsoluteTimeS;
@property (nonatomic) BOOL hasMachContinuousTimeS;
@property (nonatomic) double machContinuousTimeS;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setCfAbsoluteTimeS:;
- (void)setHasCfAbsoluteTimeS:;
- (BOOL)hasCfAbsoluteTimeS;
- (void)setMachAbsoluteTimeS:;
- (void)setHasMachAbsoluteTimeS:;
- (BOOL)hasMachAbsoluteTimeS;
- (void)setMachContinuousTimeS:;
- (void)setHasMachContinuousTimeS:;
- (BOOL)hasMachContinuousTimeS;
- (double)cfAbsoluteTimeS;
- (double)machAbsoluteTimeS;
- (double)machContinuousTimeS;
@end
