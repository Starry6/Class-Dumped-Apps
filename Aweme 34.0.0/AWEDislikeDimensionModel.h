@interface AWEDislikeDimensionModel : MTLModel
@property (nonatomic) NSString icon;
@property (nonatomic) NSString placeHolderImgName;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray entitys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)entitys;
- (void)setEntitys:;
- (id)placeHolderImgName;
- (void)setPlaceHolderImgName:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)entitysJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
