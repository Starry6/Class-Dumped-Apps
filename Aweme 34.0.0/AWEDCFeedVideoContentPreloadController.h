@interface AWEDCFeedVideoContentPreloadController : AWEDCFeedBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerScrollViewDidEndDragging:willDecelerate:;
- (void)containerScrollViewDidEndDecelerating:;
- (void)containerScrollViewDidEndScrollingAnimation:;
- (void)containerScrollViewWillBeginDragging:;
- (void)containerViewDidDisappear:;
- (void)containerCollectionView:startDidSelectItemAtIndexPath:;
- (void)sectionController:hitTestCell:targetView:event:model:;
- (void)onFetchListDataEndWithReason:response:error:;
- (id)classNameWithReferString;
- (void)privacyAlertAgreed;
- (void)cancelPreloadVideo;
- (void)preloadAweme:;
- (BOOL)enableVideoPreloadOpt;
- (void)preloadVisibleItems;
- (void)loopPreloadVideoWithIndex:dataSource:;
- (id)getCurrentModelsWithIndex:Datasource:;
- (void)preloadVisibleVideoContent;
- (void)dealloc;
- (void)preload;
- (void)containerViewDidLoad;
@end
