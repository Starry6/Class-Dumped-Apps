@interface AWEECShoppingAIGuideComponentUIConfigItem : MTLModel
@property (nonatomic) NSArray radiusArray;
@property (nonatomic) NSArray bgColorArray;
@property (nonatomic) NSString bgImgURLStr;
@property (nonatomic) NSString fontColorARGB;
@property (nonatomic) NSString borderColorARGB;
@property (nonatomic) AWEECShoppingAIGuideComponentUIConfigItem selectedConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)radiusArray;
- (void)setRadiusArray:;
- (id)bgColorArray;
- (void)setBgColorArray:;
- (id)bgImgURLStr;
- (void)setBgImgURLStr:;
- (id)fontColorARGB;
- (void)setFontColorARGB:;
- (id)borderColorARGB;
- (void)setBorderColorARGB:;
- (id)selectedConfig;
- (void)setSelectedConfig:;
- (void).cxx_destruct;
+ (id)selectedConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
