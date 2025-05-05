@interface IPAChecksum : NSObject
- (id)string;
- (id)initWithBytes:;
- (id)initWithString:;
- (unsigned long long)hash;
- (id)initWithData:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithChecksumAsData:;
- (id)checksumBytes;
- (BOOL)isEqualToBytes:;
@end
