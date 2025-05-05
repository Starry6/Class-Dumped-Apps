@interface CNPostalAddressStringTokenizer : NSObject
- (id)postalAddressFromString:error:;
+ (id)postalAddressFromString:error:;
+ (id)tokenNameForScannerResultType:;
@end
