@interface IESLiveSaaSBorderInfo : BDDynamicMTLModel
@property (nonatomic) Q borderType;
@property (nonatomic) IESLiveSaaSStaticBorderInfo staticBorder;
@property (nonatomic) IESLiveSaaSDynamicBorderInfo dynamicBorder;
@property (nonatomic) NSNumber duration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dynamicBorder;
- (void)setDynamicBorder:;
- (void)setStaticBorder:;
- (id)staticBorder;
- (void)setDuration:;
- (void).cxx_destruct;
- (id)duration;
- (unsigned long long)borderType;
- (void)setBorderType:;
+ (id)dynamicBorderJSONTransformer;
+ (id)staticBorderJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
