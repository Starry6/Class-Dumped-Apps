@interface AWEECOMIMDynamicSystemButton : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) BDPCDDynamicCardTextActionButton contentButton;
@property (nonatomic) BDPCDDynamicCardSystemButtonModel itemModel;
- (id)itemModel;
- (void)setItemModel:;
- (void)clickAction:;
- (void)updateWithElememtModel:;
- (void)setContentButton:;
- (double)heightWithElementModel:;
- (BOOL)canElementTap;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)contentButton;
+ (id)sizeWithElementModel:maxSize:;
+ (id)buttonTextFont;
+ (BOOL)checkSupportSubElementViewWithElementModel:;
+ (double)heightWithElementModel:maxSize:;
+ (double)buttonHeight;
@end
