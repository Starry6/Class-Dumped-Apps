@interface NSDebugString : NSString
- (void)dealloc;
- (unsigned short)characterAtIndex:;
- (id)initWithString:;
- (void)getCharacters:range:;
- (unsigned long long)length;
- (id)copyWithZone:;
@end
