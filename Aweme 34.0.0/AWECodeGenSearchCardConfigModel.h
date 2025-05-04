@interface AWECodeGenSearchCardConfigModel : AWEBaseDataModel
@property (nonatomic) NSString backgroundColorStart;
@property (nonatomic) NSString backgroundColorEnd;
@property (nonatomic) NSString suggestWordBgColor;
@property (nonatomic) NSString coverUrl;
- (void)setCoverUrl:;
- (id)coverUrl;
- (id)backgroundColorEnd;
- (void)setBackgroundColorEnd:;
- (id)backgroundColorStart;
- (void)setBackgroundColorStart:;
- (id)suggestWordBgColor;
- (void)setSuggestWordBgColor:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
