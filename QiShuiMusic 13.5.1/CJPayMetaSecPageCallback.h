@interface CJPayMetaSecPageCallback : NSObject
@property (nonatomic) NSMutableArray pageStack;
@property (nonatomic) q currentPage;
- (int)getScenePageName;
- (id)pageStack;
- (void)setPageStack:;
- (long long)currentPage;
- (void).cxx_destruct;
- (void)setCurrentPage:;
@end
