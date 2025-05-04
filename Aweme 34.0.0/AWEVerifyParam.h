@interface AWEVerifyParam : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) NSString token;
@property (nonatomic) NSNumber skipRecordVerify;
@property (nonatomic) NSString childrenCertToken;
@property (nonatomic) NSNumber youthCertScene;
@property (nonatomic) BOOL needChildrenCert;
- (id)youthCertScene;
- (void)setYouthCertScene:;
- (void)setSkipRecordVerify:;
- (void)setChildrenCertToken:;
- (void)setNeedChildrenCert:;
- (id)skipRecordVerify;
- (BOOL)needChildrenCert;
- (id)childrenCertToken;
- (void)setUrl:;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
- (id)url;
@end
