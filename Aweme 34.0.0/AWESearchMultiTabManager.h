@interface AWESearchMultiTabManager : NSObject
@property (nonatomic) <AWESearchMultiTabManagerImplProtocol> managerImpl;
@property (nonatomic) BOOL immersiveContainerViewHiddenByCard;
@property (nonatomic) BOOL isTabChanging;
@property (nonatomic) AWESearchResultVerticalBaseViewController container;
- (void)setLogExtra:;
- (id)logExtra;
- (void)setManagerImpl:;
- (id)managerImpl;
- (BOOL)isMultiTabScene;
- (void)prepareClear;
- (void)rollbackClear;
- (void)confirmClear;
- (BOOL)immersiveContainerViewHiddenByCard;
- (BOOL)isTabChanging;
- (void)loadDataForTab:completion:;
- (BOOL)hasDataForTab:;
- (void)showDataForTab:completion:;
- (void)setImmersiveContainerViewHiddenByCard:;
- (void)setIsTabChanging:;
- (BOOL)initManagerImplWithClzIfNeeded:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
@end
