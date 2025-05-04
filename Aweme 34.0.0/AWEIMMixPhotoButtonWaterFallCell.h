@interface AWEIMMixPhotoButtonWaterFallCell : AWEIMImageWaterFallCell
@property (nonatomic) UIButton actionButton;
@property (nonatomic) <AWEIMImageWaterFallItemProtocol> item;
@property (nonatomic) <AWEIMMixPhotoButtonWaterFallCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithItem:;
- (void)setupButtonUI;
- (void)setupButtonLayout;
- (void)didButtonClicked;
- (id)delegate;
- (void)setItem:;
- (id)initWithFrame:;
- (id)item;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)actionButton;
- (void)setActionButton:;
@end
