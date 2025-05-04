@interface AWEStarAtlasTCMCreateItemModel : MTLModel
@property (nonatomic) q starAtlasType;
@property (nonatomic) NSString starAtlasOrderID;
@property (nonatomic) NSString brandName;
@property (nonatomic) NSString productName;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)starAtlasOrderID;
- (void)setStarAtlasOrderID:;
- (long long)starAtlasType;
- (void)setStarAtlasType:;
- (void)setProductName:;
- (id)productName;
- (void).cxx_destruct;
- (id)brandName;
- (void)setBrandName:;
+ (id)starAtlasTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
