@interface CNEmailAddressScanner : NSObject
- (id)firstEmailAddressInString:;
- (void)withEmailAddressesInString:each:;
- (void)enumerateEmailAddressesInString:usingBlock:;
@end
