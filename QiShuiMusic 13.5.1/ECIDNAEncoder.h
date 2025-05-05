@interface ECIDNAEncoder : NSObject
+ (BOOL)encodingRequiredForDomainName:;
+ (id)stringByEncodingDomainName:;
@end
