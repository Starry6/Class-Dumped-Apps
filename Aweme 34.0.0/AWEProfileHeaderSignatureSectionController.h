@interface AWEProfileHeaderSignatureSectionController : AWEBaseListSectionController
@property (nonatomic) NSMutableArray binds;
@property (nonatomic) AWEProfileHeaderSignatureCollectionViewCell cell;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)viewControllerDidAppear:;
- (void)viewControllerDidDisappear:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (id)binds;
- (void)setBinds:;
- (void)editSignature;
- (void)trackLiveTiemNoticeShowEvent;
- (void)didTapExpand;
- (void)eventTrack4IntroShowWithEnterMethod:status:textLines:;
- (void)showEditProfileFromSignature;
- (void)eventTrackBarClickWithNoticeText:;
- (void)eventTrackBarShowWithNoticeText:;
- (Class)cellClass;
- (BOOL)showSeparator;
- (void).cxx_destruct;
- (id)cell;
- (void)setCell:;
@end
