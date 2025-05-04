@interface AWEECShoppingGuideInputSugResponseModel : MTLModel
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMessage;
@property (nonatomic) NSArray recommendInputs;
@property (nonatomic) NSArray hitKeywords;
@property (nonatomic) NSString baseUrl;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)recommendInputs;
- (id)hitKeywords;
- (void)setRecommendInputs:;
- (void)setHitKeywords:;
- (long long)statusCode;
- (id)extra;
- (id)baseUrl;
- (void).cxx_destruct;
- (void)setBaseUrl:;
- (void)setStatusCode:;
- (void)setStatusMessage:;
- (id)statusMessage;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
