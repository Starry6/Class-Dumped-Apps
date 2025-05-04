@interface AWEEcomSearchResultPageStyle : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEGeneralSearchBackgroundModel searchBackgroundConfig;
@property (nonatomic) AWEGeneralSearchBackgroundModel searchBackgroundConfigOverride;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)searchBackgroundConfig;
- (id)searchBackgroundConfigOverride;
- (void)setSearchBackgroundConfig:;
- (void)setSearchBackgroundConfigOverride:;
- (void)fillMerchandiseResp:;
- (void).cxx_destruct;
+ (id)searchBackgroundConfigJSONTransformer;
+ (id)searchBackgroundConfigOverrideJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
