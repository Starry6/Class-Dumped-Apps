@interface AWESearchAIGCResultBaseViewController : AWESearchResultVerticalBaseViewController
@property (nonatomic) double routerStartTs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)configWithRouterParamDict:;
- (void)resetRouterParamDict:previousParams:;
- (id)routerParamsDict;
- (double)routerStartTs;
- (void)setRouterStartTs:;
- (void)viewDidLoad;
@end
