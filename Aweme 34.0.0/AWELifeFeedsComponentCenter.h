@interface AWELifeFeedsComponentCenter : NSObject
@property (nonatomic) AWELifeFeedsPageViewModel pageModel;
@property (nonatomic) NSMutableDictionary componentMap;
@property (nonatomic) AWELifeFeedsPageContext pageContext;
- (id)pageModel;
- (id)componentMap;
- (id)componentWithKey:;
- (BOOL)registerComponent:withKey:;
- (id)componentViewWithKey:componentViewModel:size:;
- (id)buildComponentViewModelWithNode:;
- (void)setComponentMap:;
- (id)init;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
@end
