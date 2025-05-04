@interface AWEPaidStreamBaseBlockView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) AWEPaidStreamUIConfig uiConfig;
@property (nonatomic) @? actionHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uiConfig;
- (void)setUiConfig:;
- (void)install:uiConfig:paymentButtonView:actionHandler:;
- (id)initWithUIconfig:;
- (id)actionHandler;
- (void)setActionHandler:;
- (void)uninstall;
- (void)setup;
- (id)contentView;
- (void)clearContent;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)showContent;
@end
