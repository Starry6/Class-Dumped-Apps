@interface IESLiveAudioThemePanel : UIView
@property (nonatomic) IESLiveAudioThemePanelViewModel viewModel;
@property (nonatomic) UIView blurView;
@property (nonatomic) IESLivePopupInsideCollectionView collectionView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) <IESLivePhotoLibraryService> photoService;
@property (nonatomic) UIButton ugcBtn;
@property (nonatomic) @? didClickTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindViewModel;
- (id)didClickTitle;
- (void)editAsset:fromController:;
- (void)editImage:fromController:;
- (id)initWithViewModel:context:;
- (id)photoService;
- (void)setDidClickTitle:;
- (void)setPhotoService:;
- (void)setUgcBtn:;
- (id)ugcBtn;
- (void)uploadButtonDidClick;
- (id)blurView;
- (void)setBlurView:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setupConstraints;
- (id)viewModel;
- (void)setTitleLabel:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setCollectionView:;
- (id)itemSize;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setViewModel:;
- (id)titleLabel;
- (void)imagePickerControllerDidCancel:;
- (void)imagePickerController:didFinishPickingMediaWithInfo:;
- (void)setupViews;
+ (double)panelHeight;
+ (double)bottomMargin;
@end
