@interface AWESearchLynxHorizontalItemModel : AWEBaseApiModel
@property (nonatomic) q awemeIndex;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSString tagStr;
@property (nonatomic) BOOL hideTitle;
- (id)aweme;
- (void)setAweme:;
- (long long)awemeIndex;
- (void)setAwemeIndex:;
- (id)tagStr;
- (void)setTagStr:;
- (void).cxx_destruct;
- (BOOL)hideTitle;
- (void)setHideTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
