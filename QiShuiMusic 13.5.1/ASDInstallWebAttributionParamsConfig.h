@interface ASDInstallWebAttributionParamsConfig : NSObject
@property (nonatomic) NSNumber appAdamId;
@property (nonatomic) NSString adNetworkRegistrableDomain;
@property (nonatomic) NSString impressionId;
@property (nonatomic) NSString sourceWebRegistrableDomain;
@property (nonatomic) NSString version;
@property (nonatomic) q attributionContext;
- (void)setVersion:;
- (id)version;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)appAdamId;
- (void)setAppAdamId:;
- (void)setImpressionId:;
- (void)setAdNetworkRegistrableDomain:;
- (void)setAttributionContext:;
- (void)setSourceWebRegistrableDomain:;
- (id)impressionId;
- (id)adNetworkRegistrableDomain;
- (id)sourceWebRegistrableDomain;
- (long long)attributionContext;
+ (BOOL)supportsSecureCoding;
@end
