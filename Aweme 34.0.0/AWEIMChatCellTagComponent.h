@interface AWEIMChatCellTagComponent : AWEIMChatCellComponentBase
@property (nonatomic) <AWEIMChatCellRecommendChatInterface> recommendChatService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)updateComponentWhenChatUpdate:;
- (void)onPresenter:willUpdateView:;
- (void)recommendChatActionButtonDidShow:;
- (void)setRecommendChatService:;
- (id)recommendChatService;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
