@interface AWEFilterDetailAuthorSecretInfoModel : MTLModel
@property (nonatomic) AWEUserModel authorInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)authorInfo;
- (void)setAuthorInfo:;
- (void).cxx_destruct;
+ (id)authorInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
