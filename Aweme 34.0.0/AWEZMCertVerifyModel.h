@interface AWEZMCertVerifyModel : AWEBaseApiModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString bizNO;
@property (nonatomic) NSNumber skipRecordVerify;
@property (nonatomic) NSDictionary zhimaTrackParams;
@property (nonatomic) BOOL needChildrenCert;
@property (nonatomic) NSString childrenCertToken;
@property (nonatomic) NSNumber youthCertScene;
- (void)setZhimaTrackParams:;
- (id)youthCertScene;
- (void)setYouthCertScene:;
- (void)setSkipRecordVerify:;
- (void)setChildrenCertToken:;
- (void)setNeedChildrenCert:;
- (void)setBizNO:;
- (id)skipRecordVerify;
- (BOOL)needChildrenCert;
- (id)childrenCertToken;
- (id)zhimaTrackParams;
- (id)bizNO;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)initWithDict:;
- (id)url;
@end
