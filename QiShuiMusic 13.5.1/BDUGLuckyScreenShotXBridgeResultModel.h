@interface BDUGLuckyScreenShotXBridgeResultModel : BDXBridgeModel
@property (nonatomic) NSString message;
@property (nonatomic) q statusCode;
@property (nonatomic) NSString cacheMessage;
@property (nonatomic) q cacheStatusCode;
@property (nonatomic) NSString absolutePath;
@property (nonatomic) NSString relativePath;
- (long long)cacheStatusCode;
- (void)setCacheStatusCode:;
- (void)setStatusCode:;
- (long long)statusCode;
- (void)setMessage:;
- (void)setRelativePath:;
- (id)relativePath;
- (id)message;
- (void).cxx_destruct;
- (id)absolutePath;
- (void)setAbsolutePath:;
- (id)cacheMessage;
- (void)setCacheMessage:;
+ (id)JSONKeyPathsByPropertyKey;
@end
