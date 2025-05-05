@interface IESECAfterLiveGuideCardWindowCardInfo : MTLModel
@property (nonatomic) NSArray products;
@property (nonatomic) NSString title;
@property (nonatomic) NSString jumpTip;
@property (nonatomic) NSString windowScheme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpTip;
- (void)setJumpTip:;
- (void)setWindowScheme:;
- (id)windowScheme;
- (void)setTitle:;
- (id)products;
- (id)title;
- (void).cxx_destruct;
- (void)setProducts:;
+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
