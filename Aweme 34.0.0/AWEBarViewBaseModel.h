@interface AWEBarViewBaseModel : AWEBaseApiModel
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) AWEBarLayoutModel layout;
- (void)setLayout:;
- (id)layout;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)setShouldShow:;
+ (id)layoutJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
