@interface AWEModelLayerStudioNetworkProvider.CodeGenV1ShootPositionRecommendNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider
@property (nonatomic) NSArray imageList;
@property (nonatomic) NSString text;
@property (nonatomic) NSString title;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSNumber defalutCheckType;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void)setImageList:;
- (id)defalutCheckType;
- (void)setDefalutCheckType:;
- (id)init;
- (void)setCount:;
- (void)setText:;
- (id)count;
- (id)text;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (Class)modelClass;
- (id)imageList;
+ (id)businessURI;
@end
