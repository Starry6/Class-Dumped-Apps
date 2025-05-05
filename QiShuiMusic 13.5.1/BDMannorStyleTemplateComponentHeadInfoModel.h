@interface BDMannorStyleTemplateComponentHeadInfoModel : MTLModel
@property (nonatomic) NSString imageUrl;
@property (nonatomic) NSString name;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString marketTag;
@property (nonatomic) NSString sellingTag;
@property (nonatomic) q marketTagSourceId;
@property (nonatomic) q sellingTagSourceId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)marketTag;
- (long long)marketTagSourceId;
- (id)sellingTag;
- (long long)sellingTagSourceId;
- (void)setMarketTag:;
- (void)setMarketTagSourceId:;
- (void)setSellingTag:;
- (void)setSellingTagSourceId:;
- (void)setName:;
- (id)buttonText;
- (void).cxx_destruct;
- (id)name;
- (id)imageUrl;
- (void)setImageUrl:;
- (void)setButtonText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
