@interface AWEIMChatCellVerifyIconComponent : AWEIMChatCellComponentBase
@property (nonatomic) BOOL hasRender;
@property (nonatomic) NSString vString;
@property (nonatomic) q verifyType;
- (void)updateComponentWhenChatUpdate:;
- (void)onPresenter:willUpdateView:;
- (void)onCellWillRenderForCurrentComponent;
- (BOOL)hasRender;
- (void)setHasRender:;
- (void)setVString:;
- (id)vString;
- (void).cxx_destruct;
- (void)setVerifyType:;
- (long long)verifyType;
+ (BOOL)canCreateComponentWithContext:;
@end
