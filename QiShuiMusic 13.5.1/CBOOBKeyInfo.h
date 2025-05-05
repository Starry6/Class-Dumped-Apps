@interface CBOOBKeyInfo : NSObject
@property (nonatomic) NSData btAddressData;
@property (nonatomic) NSData irkData;
- (void)encodeWithXPCObject:;
- (id)irkData;
- (id)initWithXPCObject:error:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (void)setIrkData:;
- (BOOL)isEqual:;
- (id)btAddressData;
- (void)setBtAddressData:;
@end
