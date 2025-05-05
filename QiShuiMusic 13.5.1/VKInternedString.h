@interface VKInternedString : NSString
- (void)dealloc;
- (unsigned short)characterAtIndex:;
- (id)initWithString:;
- (void)getCharacters:range:;
- (id)substringToIndex:;
- (unsigned long long)hash;
- (long long)compare:options:range:locale:;
- (id)substringFromIndex:;
- (void).cxx_destruct;
- (id)substringWithRange:;
- (unsigned long long)length;
- (BOOL)isEqualToString:;
- (id)copyWithZone:;
+ (id)stringWithString:;
@end
