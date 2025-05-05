@interface CSJSplashPrecacheVideoModel : CSJBasicModel
@property (nonatomic) NSString cid;
@property (nonatomic) NSString url;
@property (nonatomic) NSString file_hash;
@property (nonatomic) double effective_time;
@property (nonatomic) double expiration_time;
- (double)expiration_time;
- (double)effective_time;
- (id)file_hash;
- (void)setEffective_time:;
- (void)setExpiration_time:;
- (void)setFile_hash:;
- (id)url;
- (void)setUrl:;
- (id)cid;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setCid:;
@end
