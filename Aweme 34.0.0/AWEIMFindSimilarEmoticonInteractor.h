@interface AWEIMFindSimilarEmoticonInteractor : AWEIMComponentBase
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
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
+ (void)trackEnterSimilarDisplayWithConfig:;
@end
