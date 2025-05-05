@interface MRKeyboardMessage : MRProtocolMessage
@property (nonatomic) Q state;
@property (nonatomic) NSData encryptedTextCyphertext;
@property (nonatomic) MRTextEditingAttributes attributes;
- (id)attributes;
- (unsigned long long)type;
- (unsigned long long)state;
- (void).cxx_destruct;
- (id)encryptedTextCyphertext;
- (id)initWithState:encryptedTextCyphertext:attributes:;
- (id)decryptedTextUsingCryptoSession:;
+ (id)encryptedMessageWithState:text:attributes:usingCryptoSession:;
@end
