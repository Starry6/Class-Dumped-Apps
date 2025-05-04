@interface AWEIMMessagePurchasedFansTagComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMWebImageViewPresenter imagePresenter;
- (void)componentDidMounted:;
- (void)p_addKVO:;
- (void)p_updatePresenter:;
- (void)p_updateProps:;
- (void)setImagePresenter:;
- (id)imagePresenter;
- (id)p_placeholderIcon;
- (id)p_liveFansIconURLWithLevel:context:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
