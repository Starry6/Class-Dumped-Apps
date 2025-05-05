@interface IDSGlobalLinkMessage : NSObject
@property (nonatomic) q command;
@property (nonatomic) NSData hmacKeyData;
- (void)dealloc;
- (void)setAttributes:;
- (id)initWithCommand:;
- (long long)command;
- (void).cxx_destruct;
- (BOOL)_addAttribute:;
- (void)_addAddressAttribute:value:;
- (void)_addUInt16Attribute:value:;
- (void)_addUInt32Attribute:value:;
- (void)_addUInt64Attribute:value:;
- (void)_addBinaryDataAttribute:value:;
- (BOOL)getAttribute:attribute:;
- (BOOL)verifyHMacDigestWithKey:inputBuffer:inputLength:;
- (BOOL)write:outputLength:;
- (BOOL)read:inputLength:;
- (id)hmacKeyData;
+ (id)messageWithCommand:attributes:;
+ (id)messageWithBuffer:length:;
@end
