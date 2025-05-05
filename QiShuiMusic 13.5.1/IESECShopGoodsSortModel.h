@interface IESECShopGoodsSortModel : MTLModel
@property (nonatomic) q sortType;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL isCurrentTab;
@property (nonatomic) BOOL canReverse;
@property (nonatomic) q defaultSort;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDefaultSort:;
- (BOOL)canReverse;
- (long long)defaultSort;
- (BOOL)isCurrentTab;
- (void)setCanReverse:;
- (void)setIsCurrentTab:;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (long long)sortType;
- (void)setSortType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
