@interface AWEBarTextModel : AWEBarViewBaseModel
@property (nonatomic) NSString text;
@property (nonatomic) AWEBarFontModel font;
@property (nonatomic) BOOL shouldTruncate;
@property (nonatomic) q ellipsisType;
- (BOOL)shouldTruncate;
- (void)setShouldTruncate:;
- (long long)ellipsisType;
- (void)setEllipsisType:;
- (void)setText:;
- (id)text;
- (id)font;
- (void).cxx_destruct;
- (void)setFont:;
+ (id)fontJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
