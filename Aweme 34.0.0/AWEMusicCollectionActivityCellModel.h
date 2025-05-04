@interface AWEMusicCollectionActivityCellModel : NSObject
@property (nonatomic) NSString coverUrl;
@property (nonatomic) NSString routerUrl;
@property (nonatomic) BOOL shouldShowHighlightAnimation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCoverUrl:;
- (id)coverUrl;
- (id)routerUrl;
- (void)setRouterUrl:;
- (double)cellHieght;
- (BOOL)shouldShowHighlightAnimation;
- (id)cellForTableView:indexPath:;
- (void)setShouldShowHighlightAnimation:;
- (void).cxx_destruct;
@end
