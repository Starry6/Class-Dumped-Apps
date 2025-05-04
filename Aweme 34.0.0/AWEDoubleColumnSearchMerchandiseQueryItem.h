@interface AWEDoubleColumnSearchMerchandiseQueryItem : AWEBaseApiModel
@property (nonatomic) NSIndexPath index;
@property (nonatomic) NSString queryID;
@property (nonatomic) NSString text;
@property (nonatomic) NSString englishText;
@property (nonatomic) BOOL displayFlag;
@property (nonatomic) BOOL selected;
- (BOOL)displayFlag;
- (void)setDisplayFlag:;
- (id)englishText;
- (void)setEnglishText:;
- (void)setIndex:;
- (id)index;
- (void)setText:;
- (id)text;
- (void)setQueryID:;
- (id)queryID;
- (void).cxx_destruct;
- (BOOL)selected;
- (void)setSelected:;
+ (id)JSONKeyPathsByPropertyKey;
@end
