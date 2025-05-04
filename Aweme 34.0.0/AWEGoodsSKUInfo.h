@interface AWEGoodsSKUInfo : MTLModel
@property (nonatomic) NSDictionary stockMap;
@property (nonatomic) NSDictionary specImages;
@property (nonatomic) NSArray specs;
@property (nonatomic) BOOL onePic;
@property (nonatomic) Q defaultUserLimit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)stockMap;
- (void)setStockMap:;
- (BOOL)onePic;
- (void)setOnePic:;
- (unsigned long long)defaultUserLimit;
- (void)setDefaultUserLimit:;
- (void).cxx_destruct;
- (void)setSpecImages:;
- (id)specImages;
- (id)specs;
- (void)setSpecs:;
+ (id)specsJSONTransformer;
+ (id)stockMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
