@interface AWEHotSpotSkyLightRequestModel : MTLModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString url;
@property (nonatomic) NSString method;
@property (nonatomic) NSDictionary params;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUrl:;
- (void)setKey:;
- (void)setMethod:;
- (id)key;
- (void).cxx_destruct;
- (id)method;
- (id)params;
- (id)url;
- (void)setParams:;
+ (id)JSONKeyPathsByPropertyKey;
@end
