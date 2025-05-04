@interface AWERVLVPanelFactory : NSObject
@property (nonatomic) NSDictionary panelViewModelMap;
@property (nonatomic) AWERVDetailPageContext pageContext;
@property (nonatomic) NSDictionary panelViewModelCache;
@property (nonatomic) Q lastDisplayScene;
- (id)initWithPageContext:;
- (id)panelViewModelDicWithScene:;
- (id)panelWithType:;
- (unsigned long long)lastDisplayScene;
- (id)panelViewModelCache;
- (id)defaultPanelTypeDic;
- (id)halfPageRightRelatedPanelTypeDic;
- (id)halfPageRightCommentPanelTypeDic;
- (id)panelViewModelMap;
- (void)setPanelViewModelCache:;
- (void)setLastDisplayScene:;
- (void)setPanelViewModelMap:;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
@end
