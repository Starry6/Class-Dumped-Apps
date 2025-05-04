@interface AWEIMMD5ResourceUpdater : NSObject
@property (nonatomic) q status;
@property (nonatomic) AWEIMMD5ResourceUpdaterConfig config;
- (void)fetchResourceWithURLString:completion:;
- (void)autoFetchWithHeaderFieldContext:completion:;
- (BOOL)p_isfileExistingAtPath:;
- (void)fetchMd5WithHeaderFieldContext:completion:;
- (void)p_removeFileAtPathIfNeeded:;
- (BOOL)p_moveFileAtPath:toPath:error:;
- (void)setConfig:;
- (void)setStatus:;
- (id)config;
- (void).cxx_destruct;
- (long long)status;
@end
