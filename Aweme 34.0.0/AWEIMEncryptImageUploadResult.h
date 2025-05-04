@interface AWEIMEncryptImageUploadResult : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSString remoteURI;
@property (nonatomic) NSString remoteURL;
@property (nonatomic) NSString skey;
@property (nonatomic) NSString md5;
@property (nonatomic) Q fileSize;
@property (nonatomic) NSString localPath;
@property (nonatomic) NSError error;
- (id)skey;
- (void)setSkey:;
- (id)remoteURL;
- (void)setError:;
- (void)setSuccess:;
- (void)setFileSize:;
- (id)description;
- (unsigned long long)fileSize;
- (void).cxx_destruct;
- (id)error;
- (BOOL)success;
- (void)setMd5:;
- (id)md5;
- (id)localPath;
- (void)setRemoteURL:;
- (id)remoteURI;
- (void)setRemoteURI:;
- (void)setLocalPath:;
@end
