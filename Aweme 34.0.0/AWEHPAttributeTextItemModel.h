@interface AWEHPAttributeTextItemModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString colorRGB;
@property (nonatomic) AWEHPAttributeTextReplaceModel replace;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)replace;
- (void)setReplace:;
- (id)colorRGB;
- (void)setColorRGB:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
