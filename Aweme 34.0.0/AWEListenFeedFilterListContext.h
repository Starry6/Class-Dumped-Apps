@interface AWEListenFeedFilterListContext : NSObject
@property (nonatomic) AWEListenFeedFilterListViewModel listViewModel;
@property (nonatomic) AWEListDataController dataController;
@property (nonatomic) NSString title;
@property (nonatomic) NSString scene;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString previousMethod;
@property (nonatomic) AWEListenFeedContext firstPageContext;
- (id)referString;
- (void)setReferString:;
- (void)setDataController:;
- (void)setPreviousMethod:;
- (void)setFirstPageContext:;
- (id)listViewModel;
- (void)setListViewModel:;
- (void)preloadMore;
- (id)previousMethod;
- (id)firstPageContext;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)dataController;
@end
