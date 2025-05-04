@interface AWESearchDiscussTabCardColorThemeModel : MTLModel
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor tabColor;
@property (nonatomic) UIColor selectedTabColor;
@property (nonatomic) UIColor fontColor;
@property (nonatomic) UIColor selectedFontColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabColor;
- (void)setTabColor:;
- (void)setSelectedTabColor:;
- (void)setSelectedFontColor:;
- (id)selectedFontColor;
- (id)selectedTabColor;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)fontColor;
- (void)setFontColor:;
+ (id)tabColorJSONTransformer;
+ (id)selectedTabColorJSONTransformer;
+ (id)fontColorJSONTransformer;
+ (id)selectedFontColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)backgroundColorJSONTransformer;
@end
