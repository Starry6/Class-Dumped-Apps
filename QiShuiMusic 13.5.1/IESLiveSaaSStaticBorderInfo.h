@interface IESLiveSaaSStaticBorderInfo : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage top;
@property (nonatomic) IESLiveSaaSImage bottom;
@property (nonatomic) IESLiveSaaSImage left;
@property (nonatomic) IESLiveSaaSImage right;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)top;
- (void)setTop:;
- (id)left;
- (void).cxx_destruct;
- (id)bottom;
- (id)right;
- (void)setBottom:;
- (void)setLeft:;
- (void)setRight:;
+ (id)bottomJSONTransformer;
+ (id)leftJSONTransformer;
+ (id)rightJSONTransformer;
+ (id)topJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
