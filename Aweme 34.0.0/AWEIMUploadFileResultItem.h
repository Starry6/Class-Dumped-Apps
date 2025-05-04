@interface AWEIMUploadFileResultItem : IESIMBaseApiModel
@property (nonatomic) NSString objectID;
@property (nonatomic) NSString secrectKey;
@property (nonatomic) NSString md5;
@property (nonatomic) NSNumber fileSize;
@property (nonatomic) NSString tosKey;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSString algorithm;
- (void)setExtra:;
- (id)tosKey;
- (id)secrectKey;
- (void)setTosKey:;
- (void)setSecrectKey:;
- (id)algorithm;
- (void)setObjectID:;
- (id)objectID;
- (id)extra;
- (void)setFileSize:;
- (void)setAlgorithm:;
- (id)fileSize;
- (void).cxx_destruct;
- (void)setMd5:;
- (id)md5;
+ (id)JSONKeyPathsByPropertyKey;
@end
