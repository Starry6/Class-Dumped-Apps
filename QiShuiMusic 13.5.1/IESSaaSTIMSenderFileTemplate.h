@interface IESSaaSTIMSenderFileTemplate : MTLModel
@property (nonatomic) NSURL localURL;
@property (nonatomic) NSString remotePath;
@property (nonatomic) NSString displayType;
@property (nonatomic) q length;
@property (nonatomic) NSString md5;
@property (nonatomic) NSString mime;
@property (nonatomic) NSString fileExtension;
@property (nonatomic) NSDictionary ext;
- (void)setExt:;
- (void)setDisplayType:;
- (id)displayType;
- (void).cxx_destruct;
- (long long)length;
- (void)setLength:;
- (id)md5;
- (void)setMd5:;
- (id)fileExtension;
- (void)setFileExtension:;
- (id)localURL;
- (void)setLocalURL:;
- (id)mime;
- (void)setMime:;
- (id)remotePath;
- (void)setRemotePath:;
- (id)ext;
@end
