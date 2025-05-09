@interface AWENewVideoCoverTextTemplateContainerView : UIView
@property (nonatomic) UIView inputBGView;
@property (nonatomic) UILabel inputTipLabel;
@property (nonatomic) UIButton finishButton;
@property (nonatomic) UICollectionView itemTabCollectionView;
@property (nonatomic) UIScrollView contentContainerView;
@property (nonatomic) UIView bottomLine;
@property (nonatomic) AWENewVideoCoverChooseBottomTitleCollectionView titleCollectionView;
@property (nonatomic) AWENewVideoCoverTextTemplateController textTemplateController;
@property (nonatomic) AWENewVideoCoverChooseBottomTextStyleView styleView;
@property (nonatomic) AWENewCoverEditImageTemplateViewModel viewModel;
@property (nonatomic) q currentTabType;
@property (nonatomic) AWENewVideoCoverBottomTextViewModel bottomViewModel;
@property (nonatomic) <AWENewVideoCoverEditTemplateTextDelegate> textDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStyleView:;
- (long long)currentTabType;
- (void)setCurrentTabType:;
- (id)titleCollectionView;
- (void)setTitleCollectionView:;
- (id)bottomViewModel;
- (void)setBottomViewModel:;
- (void)setFinishButton:;
- (void)stickerPickerControllerDidTapClearStickerButton:;
- (void)stickerPickerController:didDeselectSticker:;
- (void)updateCurrentSticker:;
- (void)stickerPickerController:didSelectSticker:extraParams:indexPath:;
- (BOOL)titleCollectionView:shouldSelectItem:;
- (void)titleCollectionView:didSelectIndex:item:;
- (void)titleCollectionView:willDisplayIndex:item:;
- (id)textTemplateController;
- (void)setTextTemplateController:;
- (void)updateCurrentStyle:;
- (void)updateCurrentStickerWithContent:;
- (void)textShowChooseStyle;
- (void)updateCurrentNLELayerView:;
- (void)textShowChooseTemplate;
- (void)textTemplateUpdateChooseEffect:;
- (void)textTemplateUpdateWithResourceId:effectId:;
- (id)initWithFrame:viewModel:textDelegate:;
- (void)textAddDefaultText:;
- (id)inputBGView;
- (id)inputTipLabel;
- (id)itemTabCollectionView;
- (id)styleView;
- (double)contentContainerHeight;
- (void)onInputTapAction;
- (void)onFinishAction;
- (id)createTemplatePickerConfig;
- (id)titleForTabItem:;
- (void)checkIndexChange;
- (void)setInputBGView:;
- (void)setInputTipLabel:;
- (void)setItemTabCollectionView:;
- (id)contentContainerView;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)viewModel;
- (void)updateContent;
- (void)setContentContainerView:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)scrollViewDidEndDecelerating:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)setupUI;
- (id)bottomLine;
- (void)setBottomLine:;
- (void)setTextDelegate:;
- (id)textDelegate;
- (id)finishButton;
@end
