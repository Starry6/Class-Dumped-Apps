@interface AWEListenFeedInteractionContext : AWEPageContext
@property (nonatomic) BOOL isContentFilterShow;
@property (nonatomic) UIFont descriptionFont;
@property (nonatomic) BOOL enableOptimizeUI;
@property (nonatomic) UIViewController<AWEListenFeedInteractionContainerProtocol><AWEListenFeedInteractionViewControllerProtocol> container;
- (BOOL)enableOptimizeUI;
- (void)setEnableOptimizeUI:;
- (BOOL)isContentFilterShow;
- (void)setIsContentFilterShow:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
- (id)descriptionFont;
- (void)setDescriptionFont:;
@end
