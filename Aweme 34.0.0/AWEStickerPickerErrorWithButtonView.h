@interface AWEStickerPickerErrorWithButtonView : AWEStickerPickerOverlayView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIButton reloadButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) @? reloadHanlder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setReloadButton:;
- (id)reloadButton;
- (void)setReloadHanlder:;
- (void)updateCenterOffset:;
- (id)reloadHanlder;
- (void)onReload;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
