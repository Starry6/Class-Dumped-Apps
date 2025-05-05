@interface TTAdSplashSocketUtil : NSObject
- (unsigned int)randomSequenceOfUnique;
+ (id)bytesFromUInt8:;
+ (unsigned char)uint8FromBytes:;
+ (id)asciiStringFromHexString:;
+ (id)bytesFromString:;
+ (id)bytesFromUInt16:;
+ (id)bytesFromUInt32:;
+ (id)bytesFromUInt64:;
+ (unsigned int)cryptographicallySecurePseudoRandomNumber;
+ (id)dataWithReverse:;
+ (id)decimalStringFromHexString:;
+ (id)hexStringFromASCIIString:;
+ (unsigned short)uint16FromBytes:;
+ (unsigned int)uint32FromBytes:;
+ (unsigned long long)uint64FromBytes:;
+ (id)shared;
+ (id)hexStringFromData:;
@end
