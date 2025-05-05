@interface IESECWinBFFBaseInfoModel : MTLModel
@property (nonatomic) NSString commonPassThrough;
@property (nonatomic) Q layout;
@property (nonatomic) BOOL hideEmptyStatus;
@property (nonatomic) NSString selectCategory;
@property (nonatomic) NSString selectSubCategory;
@property (nonatomic) NSString nextApi;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)nextApi;
- (BOOL)hideEmptyStatus;
- (id)commonPassThrough;
- (id)selectCategory;
- (id)selectSubCategory;
- (void)setCommonPassThrough:;
- (void)setHideEmptyStatus:;
- (void)setNextApi:;
- (void)setSelectCategory:;
- (void)setSelectSubCategory:;
- (void)setLayout:;
- (unsigned long long)layout;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
