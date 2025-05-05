@interface IESForestEventTrackData : NSObject
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) NSDictionary loaderInfo;
@property (nonatomic) NSDictionary errorInfo;
@property (nonatomic) NSDictionary resourceInfo;
@property (nonatomic) NSDictionary metricInfo;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) NSDictionary calculatedMetricInfo;
- (id)calculatedMetricInfo;
- (id)errorInfo;
- (id)extractDataTypeFromURLString:;
- (id)loaderInfo;
- (id)monitorGeckoErrorCode:;
- (id)resourceInfo;
- (void)setErrorInfo:;
- (void)setExtraInfo:;
- (void)setLoaderInfo:;
- (void)setResourceInfo:;
- (BOOL)isTemplate;
- (BOOL)isSuccess;
- (void)setMetricInfo:;
- (id)initWithRequest:response:;
- (void).cxx_destruct;
- (void)setIsTemplate:;
- (id)metricInfo;
- (void)setIsSuccess:;
- (id)extraInfo;
@end
