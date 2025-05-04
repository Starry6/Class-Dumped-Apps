@interface AWEECShoppingGuideWelcomeInfoResponseModel : MTLModel
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMessage;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray sugList;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSArray welcomeInfoArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)sugList;
- (id)welcomeInfoArray;
- (void)setSugList:;
- (void)setWelcomeInfoArray:;
- (long long)statusCode;
- (id)extra;
- (void).cxx_destruct;
- (id)title;
- (void)setStatusCode:;
- (void)setTitle:;
- (void)setStatusMessage:;
- (id)statusMessage;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
