@interface AWEPOIDetailNGUGCConspicuousQaEmptyComponentViewModel : DitoComponentViewModel
@property (nonatomic) AWEPOIDetailNGPageContext context;
@property (nonatomic) BOOL hasTrackedShow;
@property (nonatomic) AWEPOIFeedUgcQAEntranceInfoModel qaModel;
@property (nonatomic) AWEPOIDetailNGUGCConspicuousQaEmptyComponentView componentView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHasTrackedShow:;
- (BOOL)hasTrackedShow;
- (id)componentReuseIdentifier;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (void)componentViewDidCompleteShow;
- (id)qaModel;
- (void)setQaModel:;
- (void)didTapMoreFoldIcon;
- (void)bindRefreshAfterWriteSuccess;
- (void)postRefreshEventAfterDelay;
- (id)initWithNode:;
- (void).cxx_destruct;
- (id)componentView;
- (void)setComponentView:;
@end
