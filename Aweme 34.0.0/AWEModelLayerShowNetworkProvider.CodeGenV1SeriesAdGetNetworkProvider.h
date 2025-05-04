@interface AWEModelLayerShowNetworkProvider.CodeGenV1SeriesAdGetNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider
@property (nonatomic) NSString seriesId;
@property (nonatomic) NSString scene;
@property (nonatomic) NSString seriesExtraParams;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)seriesExtraParams;
- (void)setSeriesExtraParams:;
- (void)setScene:;
- (id)init;
- (id)scene;
- (void).cxx_destruct;
- (Class)modelClass;
- (id)seriesId;
- (void)setSeriesId:;
+ (id)businessURI;
@end
