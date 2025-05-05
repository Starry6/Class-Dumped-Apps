@interface CSJSDWebImageDownloaderDecryptor : NSObject
@property (nonatomic) @? block;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)decryptedDataWithData:response:;
- (id)block;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (void)setBlock:;
+ (id)base64Decryptor;
+ (id)decryptorWithBlock:;
@end
