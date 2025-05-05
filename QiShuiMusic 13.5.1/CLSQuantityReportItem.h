@interface CLSQuantityReportItem : CLSActivityReportItem
@property (nonatomic) double quantity;
- (void)add:;
- (void)setQuantity:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)compare:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (double)quantity;
- (void)scalarMultiply:;
- (id)convertToItemCompatibleWithItem:;
+ (BOOL)supportsSecureCoding;
@end
