@interface NEIKEv2ESPSPI : NEIKEv2SPI
@property (nonatomic) I value;
- (unsigned long long)hash;
- (id)description;
- (unsigned int)value;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithValue:;
@end
