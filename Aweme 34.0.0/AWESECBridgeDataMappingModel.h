@interface AWESECBridgeDataMappingModel : MTLModel
@property (nonatomic) NSString namescope;
@property (nonatomic) NSString module;
@property (nonatomic) NSString platform;
@property (nonatomic) NSArray relatedAPIs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)namescope;
- (void)setNamescope:;
- (id)relatedAPIs;
- (void)setRelatedAPIs:;
- (id)platform;
- (void).cxx_destruct;
- (void)setPlatform:;
- (void)setModule:;
- (id)module;
+ (id)relatedAPIsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
