@interface IESECLogisticItem : MTLModel
@property (nonatomic) Q itemType;
@property (nonatomic) IESECURLModel pic;
@property (nonatomic) NSString text;
@property (nonatomic) NSString fontColor;
@property (nonatomic) Q fontType;
@property (nonatomic) NSString fontName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pic;
- (void)setPic:;
- (void)setFontType:;
- (void)setItemType:;
- (void)setText:;
- (unsigned long long)itemType;
- (void).cxx_destruct;
- (id)fontName;
- (id)text;
- (unsigned long long)fontType;
- (id)fontColor;
- (void)setFontColor:;
+ (id)JSONKeyPathsByPropertyKey;
@end
