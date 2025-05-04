@interface AWEIMMessageListFindSimilarComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMEmoticonDisplayViewControllerConfigProtocol> configContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)minContainerHeightRatioInHalfScreenContainerVC:;
- (void)componentDidMounted:;
- (id)configContext;
- (id)getEmoticonDisplayViewControllerWithConfig:;
- (void)showEmoticonDisplayViewControllerWithConfig:;
- (void)setConfigContext:;
- (BOOL)enableShowSimilarEmoticonWithMessage:;
- (void)showSimilarEmoticonWithMessage:triggerType:;
- (void)didSendSimilarEmoticonWithModel:inTheme:context:;
- (void)didSendSubscribeEmoticonWithModel:inTheme:context:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
+ (id)lazyComponentWakeupInterface;
+ (void)trackEnterSimilarDisplayWithConfig:;
@end
