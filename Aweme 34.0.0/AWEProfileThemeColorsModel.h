@interface AWEProfileThemeColorsModel : MTLModel
@property (nonatomic) NSArray lights;
@property (nonatomic) NSArray darks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)darkColorD;
- (id)lightColorD;
- (id)lightColorB;
- (id)darkColorB;
- (id)lightColorC;
- (id)darkColorC;
- (id)lights;
- (id)__getColorByColorList:index:;
- (id)darks;
- (void)setLights:;
- (void)setDarks:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
