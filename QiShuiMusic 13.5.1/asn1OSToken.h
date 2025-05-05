@interface asn1OSToken : asn1Token
@property (nonatomic) asn1Token value;
- (void)dealloc;
- (id)stringValue;
- (id)value;
- (id)_initWithID:class:length:content:opaque:;
@end
