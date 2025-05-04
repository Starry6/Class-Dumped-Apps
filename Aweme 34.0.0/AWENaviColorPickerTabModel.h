@interface AWENaviColorPickerTabModel : MTLModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString selectedName;
@property (nonatomic) Q selectedColorIndex;
@property (nonatomic) NSArray colors;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)selectedName;
- (BOOL)hasSelectedColor;
- (void)setSelectedName:;
- (void)setColors:;
- (id)init;
- (void)setKey:;
- (id)colors;
- (id)key;
- (void).cxx_destruct;
- (id)name;
- (id)selectedColor;
- (unsigned long long)selectedColorIndex;
- (void)setSelectedColorIndex:;
+ (id)colorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
