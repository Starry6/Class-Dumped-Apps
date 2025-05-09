@interface IESECCommentNewSKUView : UIView
@property (nonatomic) IESECCommentSKUViewModel model;
@property (nonatomic) IESECCommentSKUContentViewModel contentViewModel;
@property (nonatomic) NSString productTitle;
@property (nonatomic) UILabel productTitleLabel;
@property (nonatomic) IESECHighlightButton closeButton;
@property (nonatomic) UILabel skuSelectedLabel;
@property (nonatomic) IESECCommentNewSKUContentView contentView;
@property (nonatomic) IESECCommentSKUConfirmBottom confirmButton;
@property (nonatomic) IESECHighlightButton reloadButton;
@property (nonatomic) NSMutableArray selectedElements;
@property (nonatomic) NSMutableArray deSelectedElements;
@property (nonatomic) NSMutableArray skuTagNames;
@property (nonatomic) <IESECCommentNewSKUViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSkuTagNames:;
- (void)clearSKURecord;
- (id)contentViewModel;
- (id)deSelectedElements;
- (void)didTapCommentSKUCell;
- (void)didTapCommentSKUHeaderView;
- (id)getSKUElementLabelText;
- (void)initSelectSKUElement:;
- (id)initWithFrame:skuModel:productTitle:;
- (id)productTitle;
- (id)productTitleLabel;
- (id)reloadButton;
- (void)reloadSKUView;
- (void)setContentViewModel:;
- (void)setDeSelectedElements:;
- (void)setProductTitle:;
- (void)setProductTitleLabel:;
- (void)setReloadButton:;
- (void)setSelectedElements:;
- (void)setSkuSelectedLabel:;
- (void)setupMasonry;
- (void)skuSelectChanged:;
- (id)skuSelectedLabel;
- (id)skuTagNames;
- (void)tapCloseButton;
- (void)tapResetButton;
- (void)updateSelectedSKUElement:;
- (id)model;
- (id)contentView;
- (void)setModel:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)selectedElements;
- (void)confirm;
- (id)confirmButton;
- (void)setConfirmButton:;
- (id)closeButton;
- (void)setCloseButton:;
@end
