@interface AWEIMMD5ResourceUpdaterConfig : NSObject
@property (nonatomic) AWEIMMD5ResourceFileConfig fileConfig;
@property (nonatomic) NSString md5RequestString;
@property (nonatomic) NSDictionary md5RequestParams;
@property (nonatomic) NSString md5StorageCacheKey;
@property (nonatomic) @? responseMapper;
- (void)setFileConfig:;
- (id)fileConfig;
- (void)setMd5RequestString:;
- (void)setMd5RequestParams:;
- (void)setMd5StorageCacheKey:;
- (id)md5RequestString;
- (id)md5RequestParams;
- (id)md5StorageCacheKey;
- (id)responseMapper;
- (void)setResponseMapper:;
- (void).cxx_destruct;
@end
