@interface asn1IntegerToken : asn1Token
@property (nonatomic) Q value;
- (id)description;
- (unsigned long long)value;
- (id)_initWithID:class:length:content:opaque:;
@end
