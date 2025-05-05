@interface NSMutableStringProxyForMutableAttributedString : NSMutableString
- (void)HMDP_replaceCharactersInRange:withString:;
- (unsigned short)HMDP_characterAtIndex:;
- (void)replaceCharactersInRange:withString:;
- (void)dealloc;
- (unsigned short)characterAtIndex:;
- (void)getCharacters:range:;
- (id)initWithMutableAttributedString:;
- (unsigned long long)length;
@end
