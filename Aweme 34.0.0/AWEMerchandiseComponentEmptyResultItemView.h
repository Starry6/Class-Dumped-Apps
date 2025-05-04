@interface AWEMerchandiseComponentEmptyResultItemView : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView closeIcon;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) <AWEMerchandiseComponentEmptyResultItemViewDelegate> delegate;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel model;
- (id)closeIcon;
- (void)setCloseIcon:;
- (void)configWithComponentModel:;
- (id)textLabel;
- (void)setModel:;
- (id)init;
- (id)delegate;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setTextLabel:;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
- (void)closeButtonAction;
+ (double)titleWidthWithModel:;
+ (double)widthWithComponentModel:;
@end
