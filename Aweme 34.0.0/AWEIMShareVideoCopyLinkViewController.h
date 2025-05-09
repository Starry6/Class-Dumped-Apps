@interface AWEIMShareVideoCopyLinkViewController : UIViewController
@property (nonatomic) NSString displayText;
@property (nonatomic) UIView textBackView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView checkmarkImageBorder;
@property (nonatomic) UIImageView checkmarkImageView;
@property (nonatomic) UIButton reflowHintButton;
@property (nonatomic) UILabel customSubtitleLabel;
@property (nonatomic) UICollectionView transferToCollectionView;
@property (nonatomic) NSArray transferTypeArray;
@property (nonatomic) AWEShareContext context;
@property (nonatomic) NSString customTitle;
@property (nonatomic) BOOL hideSubtitle;
@property (nonatomic) NSString customSubtitle;
@property (nonatomic) BOOL useSimplifyStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)panelHeight;
- (id)dux_titleForColoseButton;
- (void)__layoutComponents;
- (id)initWithText:context:;
- (void)setUseSimplifyStyle:;
- (id)__titleLabelText;
- (void)__createComponentsWithText:;
- (void)__bindObserve;
- (void)__trackOffsiteShareChannelsShow;
- (void)__updateHideReflowIfNeeded;
- (BOOL)useSimplifyStyle;
- (id)classTransferTypeArray;
- (id)platformTextToEnum:;
- (id)reflowHintButton;
- (void)__refreshCheckboxWithSelected:;
- (void)setupTransferToCollectionView;
- (id)customSubtitle;
- (void)setupHintButton;
- (void)setupTextLabelWithText:;
- (void)__tapTextLabel:;
- (id)__reflowHintButtonText;
- (void)__tapReflowHintButton:;
- (id)__checkImageWithSelected:;
- (void)writePasteboardIfNeed:;
- (id)transferToCollectionView;
- (id)checkmarkImageBorder;
- (id)transferTypeArray;
- (id)textBackView;
- (void)__trackOffsiteShareChannelsClick:;
- (void)__transferToType:;
- (id)__checkImageBorderColorWithSelected:;
- (void)setTransferTypeArray:;
- (id)textLabel;
- (void)viewWillDisappear:;
- (id)displayText;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)viewDidLoad;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setContext:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)context;
- (void)setCustomSubtitle:;
- (id)customSubtitleLabel;
- (void)setupCustomSubtitleLabel;
- (void)setCustomTitle:;
- (id)customTitle;
- (BOOL)hideSubtitle;
- (void)setHideSubtitle:;
- (id)checkmarkImageView;
+ (id)platformTextFromEnum:;
@end
