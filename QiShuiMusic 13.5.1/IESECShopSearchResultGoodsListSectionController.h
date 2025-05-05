@interface IESECShopSearchResultGoodsListSectionController : IESECShopGoodsSectionController
@property (nonatomic) BOOL isRecommend;
@property (nonatomic) IESECAtom searchWordAtom;
@property (nonatomic) IESECAtom logPassbackAtom;
@property (nonatomic) IESECAtom searchIDAtom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)logPassbackAtom;
- (id)searchIDAtom;
- (id)searchWordAtom;
- (void)setLogPassbackAtom:;
- (void)setSearchIDAtom:;
- (void)setSearchWordAtom:;
- (unsigned long long)searchType;
- (id)actionHandler;
- (void).cxx_destruct;
@end
