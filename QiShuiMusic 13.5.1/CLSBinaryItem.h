@interface CLSBinaryItem : CLSActivityItem
@property (nonatomic) q valueType;
@property (nonatomic) BOOL value;
- (void)setValueType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setValue:;
- (id)description;
- (BOOL)value;
- (id)_init;
- (id)dictionaryRepresentation;
- (long long)valueType;
- (id)initWithIdentifier:title:;
- (id)initWithIdentifier:title:type:;
+ (BOOL)supportsSecureCoding;
@end
