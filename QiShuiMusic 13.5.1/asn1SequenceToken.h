@interface asn1SequenceToken : asn1Token
- (void)reset;
- (id)description;
- (id)_initWithID:class:length:content:opaque:;
- (id)nextToken;
@end
