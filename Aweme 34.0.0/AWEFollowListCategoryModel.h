@interface AWEFollowListCategoryModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) NSNumber tag;
@property (nonatomic) BOOL enableBadge;
@property (nonatomic) NSString frequencyControlKey;
@property (nonatomic) AWEFollowListPageContext pageContext;
- (BOOL)enableBadge;
- (id)frequencyControlKey;
- (void)setFrequencyControlKey:;
- (id)getImageName;
- (id)initWithTitle:schema:tag:;
- (void)setupBadgeControl:;
- (void)setEnableBadge:;
- (id)schema;
- (id)tag;
- (void)setSchema:;
- (void)setTag:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setPageContext:;
- (id)pageContext;
+ (id)JSONKeyPathsByPropertyKey;
@end
