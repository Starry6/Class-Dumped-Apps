@interface AWEPaySwiftImpl.TripShowElementModel : MTLModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString textHighlightColor;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString highlightIcon;
@property (nonatomic) NSString schema;
- (void)setTextHighlightColor:;
- (id)highlightIcon;
- (void)setHighlightIcon:;
- (id)schema;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setSchema:;
- (void)setKey:;
- (id)icon;
- (void)setText:;
- (id)key;
- (id)text;
- (void)setTextColor:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)textColor;
- (id)initWithCoder:;
- (id)textHighlightColor;
+ (id)JSONKeyPathsByPropertyKey;
@end
