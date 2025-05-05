@interface ClearMessage : NSObject
@property (nonatomic) NSString base64String;
@property (nonatomic) NSData data;
- (id)encryptedWith:padding:error:;
- (id)initWithBase64Encoded:error:;
- (id)initWithString:using:error:;
- (id)signedWith:digestType:error:;
- (id)stringWithEncoding:error:;
- (id)verifyWith:signature:digestType:error:;
- (id)init;
- (id)data;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)base64String;
@end
