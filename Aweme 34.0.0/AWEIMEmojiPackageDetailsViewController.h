@interface AWEIMEmojiPackageDetailsViewController : UIViewController
@property (nonatomic) UICollectionView detailsCollection;
@property (nonatomic) UIView bgContainerView;
@property (nonatomic) AWEIMEmojiPackageDetailInfo packageDetail;
@property (nonatomic) AWEIMEmojiPackageDetailsHeader packageHeader;
@property (nonatomic) AWEIMEmoticonPreviewV2 preview;
@property (nonatomic) UIButton addButton;
@property (nonatomic) UIButton shareButton;
@property (nonatomic) NSNumber emojiPackageId;
@property (nonatomic) NSNumber stickerType;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) NSDictionary imBizTrackCommonParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)configWithRouterParamDict:;
- (id)trackParams;
- (void)setTrackParams:;
- (void)setStickerType:;
- (void)__setupUI;
- (id)bgContainerView;
- (void)setBgContainerView:;
- (id)imBizTrackCommonParams;
- (void)setImBizTrackCommonParams:;
- (void)hidePreview;
- (void)setEmojiPackageId:;
- (void)__populateData;
- (void)__didClickBack;
- (void)__resetEmptyBackgroundTipView;
- (void)__refreshAddButtonUI;
- (id)packageDetail;
- (void)__didClickAdd;
- (void)emojiPackageDetailsHeaderDidClickAddPackage:;
- (void)emojiPackageDetailsHeaderDidClickAuthor:isSubscribe:authorArray:;
- (void)setPackageDetail:;
- (void)__packageDidChangeInstallStatusNotification:;
- (id)emojiPackageId;
- (void)__dimissEmojiPreview;
- (void)__dispalyPackageDetails;
- (void)__resetOfflineTipView;
- (id)packageHeader;
- (id)detailsCollection;
- (id)__emotionModelOfEmojiPackageDetailsCollectionViewCell:;
- (void)__didClickShare;
- (void)tapToDismissPreviewGesHandler:;
- (void)__showPreviewEmojiOnCell:;
- (void)setPackageHeader:;
- (void)setDetailsCollection:;
- (id)collectionView:layout:referenceSizeForFooterInSection:;
- (id)preview;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (void)viewWillDisappear:;
- (void)dealloc;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)viewDidLoad;
- (void)setPreview:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)addButton;
- (void)setShareButton:;
- (id)shareButton;
- (void)setAddButton:;
- (id)stickerType;
@end
