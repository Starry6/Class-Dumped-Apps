@interface AWEHotSpotTTArticleContentTableViewCell : AWEAwemeDetailTableViewCell
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)defaultSeekToTime;
- (void)setDefaultSeekToTime:;
- (BOOL)shouldHideMusicInfo;
- (void)_removeChildVC;
- (void)_addChildVC;
- (BOOL)isFirstRender;
- (double)loadArticleInterval;
- (id)viewController;
- (void).cxx_destruct;
- (void)setViewController:;
- (id)previousPage;
- (void)setPreviousPage:;
- (id)webVC;
- (id)parentVC;
- (void)setParentVC:;
+ (id)reuseIdentifierWithMediaType:;
@end
