@interface AWEShareEcomMediaModel : MTLModel
@property (nonatomic) AWEShareIMInfoModel imInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imInfo;
- (void).cxx_destruct;
- (void)setImInfo:;
+ (id)imInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
