@interface NSConcreteAttributedString : NSAttributedString
- (id)HMDP_initWithString:;
- (id)HMDP_initWithString:attributes:;
- (id)string;
- (id)init;
- (void)dealloc;
- (id)initWithString:attributes:;
- (id)attributesAtIndex:effectiveRange:;
- (id)initWithString:;
- (id)initWithAttributedString:;
- (id)attribute:atIndex:effectiveRange:;
- (unsigned long long)length;
- (id)copyWithZone:;
- (id)_runArrayHoldingAttributes;
@end
