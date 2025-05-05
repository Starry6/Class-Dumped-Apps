@interface NEIKEv2IKESPI : NEIKEv2SPI
@property (nonatomic) Q value;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)value;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithValue:;
@end
