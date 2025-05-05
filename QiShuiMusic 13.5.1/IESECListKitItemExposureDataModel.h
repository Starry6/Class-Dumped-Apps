@interface IESECListKitItemExposureDataModel : MTLModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSArray paramsFromClient;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)paramsFromClient;
- (void)setExtra:;
- (void)setParamsFromClient:;
- (id)extra;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)paramsFromClientJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
