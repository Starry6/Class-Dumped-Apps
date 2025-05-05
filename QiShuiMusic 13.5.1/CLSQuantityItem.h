@interface CLSQuantityItem : CLSActivityItem
@property (nonatomic) double quantity;
- (void)setQuantity:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)_init;
- (id)dictionaryRepresentation;
- (double)quantity;
- (id)initWithIdentifier:title:;
+ (BOOL)supportsSecureCoding;
@end
