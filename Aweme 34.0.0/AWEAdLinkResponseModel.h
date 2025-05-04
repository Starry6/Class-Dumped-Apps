@interface AWEAdLinkResponseModel : MTLModel
@property (nonatomic) NSString message;
@property (nonatomic) NSNumber code;
@property (nonatomic) NSDictionary adLinkMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adLinkMap;
- (void)setAdLinkMap:;
- (id)code;
- (id)message;
- (void)setCode:;
- (void).cxx_destruct;
- (void)setMessage:;
+ (id)adLinkMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
