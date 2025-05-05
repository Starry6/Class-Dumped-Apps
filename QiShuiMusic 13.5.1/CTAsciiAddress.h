@interface CTAsciiAddress : NSObject
@property (nonatomic) NSString address;
- (void).cxx_destruct;
- (id)initWithAddress:;
- (id)address;
- (id)copyWithZone:;
- (id)canonicalFormat;
- (id)encodedString;
+ (id)asciiAddressWithString:;
@end
