@interface NSPByteParser : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) r* bytes;
@property (nonatomic) r* cursor;
@property (nonatomic) Q offset;
- (id)cursor;
- (void)setOffset:;
- (id)data;
- (id)bytes;
- (void)setCursor:;
- (unsigned long long)offset;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)advanceBy:andCopyTo:;
- (id)parseDomainName;
- (unsigned char)parse8Bits:;
- (unsigned short)parse16Bits:;
- (unsigned int)parse32Bits:;
- (id)parseBytes:;
- (id)parseAddressWithFamily:;
@end
