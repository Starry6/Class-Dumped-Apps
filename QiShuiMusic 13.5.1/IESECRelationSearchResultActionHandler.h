@interface IESECRelationSearchResultActionHandler : NSObject
@property (nonatomic) BOOL isRecommend;
@property (nonatomic) Q handlerType;
@property (nonatomic) IESECStoreSearchResultViewController viewController;
@property (nonatomic) IESECCommonGoodsListHandler listHandler;
@property (nonatomic) IESECAtom searchWordAtom;
@property (nonatomic) IESECAtom logPassbackAtom;
@property (nonatomic) IESECAtom searchID;
@property (nonatomic) NSString secAuthorID;
@property (nonatomic) BOOL followStatus;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)logPassbackAtom;
- (void)setHandlerType:;
- (void)setIsRecommend:;
- (void)setTrackParams:;
- (void)setListHandler:;
- (void)setSecAuthorID:;
- (void)didSelectRelationGoods:cell:atIndex:;
- (id)entranceInfoWithViewModel:extraParams:searchParams:;
- (BOOL)followStatus;
- (id)getProductForm;
- (BOOL)isRecommend;
- (id)listHandler;
- (void)redirectToGoodsDetailByRequestWithModel:cell:extraParams:searchParams:btmID:btmInfo:btmToken:;
- (void)redirectToGoodsDetailWithURL:viewModel:extraParams:searchParams:btmToken:cell:btmInfo:btmID:;
- (id)searchWordAtom;
- (id)secAuthorID;
- (void)setFollowStatus:;
- (void)setLogPassbackAtom:;
- (void)setSearchWordAtom:;
- (void)trackBCMWithProductModel:searchParams:;
- (id)trackParams;
- (void)setViewController:;
- (id)tracker;
- (id)viewController;
- (void).cxx_destruct;
- (id)searchContext;
- (id)searchID;
- (void)setSearchID:;
- (unsigned long long)handlerType;
@end
