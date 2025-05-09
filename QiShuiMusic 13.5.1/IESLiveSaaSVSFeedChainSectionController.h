@interface IESLiveSaaSVSFeedChainSectionController : IGListSectionController
@property (nonatomic) IESLiveSaaSVSFeedChainCellModel cellModel;
@property (nonatomic) <IESLiveSaaSContainerRouter> liveRouter;
@property (nonatomic) BOOL needShowNoMoreView;
@property (nonatomic) <IESLiveSaaSVSFeedChainSectionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealWithClickFeedDrawItemIndex:;
- (id)cellForItemAtIndex:;
- (void)didSetAttachingDIContext;
- (void)didUpdateToObject:;
- (void)listAdapter:didEndDisplayingSectionController:;
- (void)listAdapter:didEndDisplayingSectionController:cell:atIndex:;
- (void)listAdapter:willDisplaySectionController:;
- (void)listAdapter:willDisplaySectionController:cell:atIndex:;
- (id)liveRouter;
- (BOOL)needShowNoMoreView;
- (void)setCellModel:;
- (void)setLiveRouter:;
- (void)setNeedShowNoMoreView:;
- (id)sizeForSupplementaryViewOfKind:atIndex:;
- (id)supplementaryViewSource;
- (id)supportedElementKinds;
- (void)trackLiveShow;
- (void)updateNeedShowNoMoreView:;
- (id)viewForSupplementaryElementOfKind:atIndex:;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
- (id)displayDelegate;
- (id)cellModel;
- (id)sizeForItemAtIndex:;
@end
