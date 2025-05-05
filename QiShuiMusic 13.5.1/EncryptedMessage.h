@interface EncryptedMessage : NSObject
@property (nonatomic) NSString base64String;
@property (nonatomic) NSData data;
- (id)decryptedWith:padding:error:;
- (id)initWithBase64Encoded:error:;
- (id)init;
- (id)data;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)base64String;
@end
