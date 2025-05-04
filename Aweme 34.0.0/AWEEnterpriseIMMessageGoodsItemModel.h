@interface AWEEnterpriseIMMessageGoodsItemModel : MTLModel
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString productID;
@property (nonatomic) NSString price;
@property (nonatomic) AWEEnterpriseIMGoodsAvaterModel avaterModel;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avaterModel;
- (void)setAvaterModel:;
- (id)price;
- (id)schema;
- (void)setProductID:;
- (id)productID;
- (void)setSchema:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (void)setPrice:;
- (id)mainTitle;
- (void)setMainTitle:;
+ (id)avaterModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
