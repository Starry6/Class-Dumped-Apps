@interface AWEAdFeaturedLabelModel : MTLModel
@property (nonatomic) NSString color;
@property (nonatomic) NSString colorForWhite;
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString textColorForWhite;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setColorForWhite:;
- (void)setTextColorForWhite:;
- (id)colorForWhite;
- (id)textColorForWhite;
- (void)setText:;
- (id)color;
- (id)text;
- (void)setTextColor:;
- (void)setColor:;
- (void).cxx_destruct;
- (id)textColor;
+ (id)JSONKeyPathsByPropertyKey;
@end
