@interface IESECWinSearchResultGoodsListSectionController : IESECRelationGoodsListSectionController
@property (nonatomic) BOOL isRecommend;
@property (nonatomic) q productTabStyle;
@property (nonatomic) IESECAtom searchWordAtom;
@property (nonatomic) IESECAtom logPassbackAtom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)logPassbackAtom;
- (unsigned long long)productCardType;
- (void)setIsRecommend:;
- (long long)productTabStyle;
- (id)cellForItemAtIndex:relationGoodsModel:;
- (BOOL)isRecommend;
- (id)searchWordAtom;
- (void)setLogPassbackAtom:;
- (void)setProductTabStyle:;
- (void)setSearchWordAtom:;
- (id)sizeForItemAtIndex:relationGoodsModel:;
- (void)tapOnSourceView:jump:;
- (unsigned long long)searchType;
- (long long)scene;
- (id)actionHandler;
- (void).cxx_destruct;
@end
