@interface AWEModelLayerStudioNetworkProvider.CodeGenMaterialGetWeatherNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSString districtId;
@property (nonatomic) NSNumber location;
@property (nonatomic) NSString dataType;
@property (nonatomic) NSString output;
@property (nonatomic) NSString coordtype;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)districtId;
- (void)setDistrictId:;
- (id)coordtype;
- (void)setCoordtype:;
- (void)setDataType:;
- (id)init;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)output;
- (id)dataType;
- (void)setOutput:;
- (Class)modelClass;
+ (id)businessURI;
@end
