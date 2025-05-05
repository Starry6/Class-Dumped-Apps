@interface AWEIMUploadFileResultItem : IESIMBaseApiModel
@property (nonatomic) NSString objectID;
@property (nonatomic) NSString secrectKey;
@property (nonatomic) NSString md5;
@property (nonatomic) NSString tosKey;
@property (nonatomic) NSDictionary extra;
- (id)secrectKey;
- (void)setExtra:;
- (void)setSecrectKey:;
- (void)setTosKey:;
- (id)tosKey;
- (id)objectID;
- (void)setObjectID:;
- (id)extra;
- (void).cxx_destruct;
- (id)md5;
- (void)setMd5:;
+ (id)JSONKeyPathsByPropertyKey;
@end
