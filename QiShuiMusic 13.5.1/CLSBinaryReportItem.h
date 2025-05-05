@interface CLSBinaryReportItem : CLSActivityReportItem
@property (nonatomic) BOOL value;
@property (nonatomic) q valueType;
- (void)add:;
- (void)setValueType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setValue:;
- (long long)compare:;
- (id)description;
- (BOOL)value;
- (id)dictionaryRepresentation;
- (long long)valueType;
- (id)copyWithZone:;
- (void)scalarMultiply:;
- (id)convertToItemCompatibleWithItem:;
+ (BOOL)supportsSecureCoding;
@end
