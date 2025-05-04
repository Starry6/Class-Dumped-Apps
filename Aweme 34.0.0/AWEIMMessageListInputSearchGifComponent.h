@interface AWEIMMessageListInputSearchGifComponent : AWEIMComponentBase
@property (nonatomic) q oldInputType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)halfScreenContainerVCWillDismiss:;
- (BOOL)halfScreenContainerVCShouldEndEdtingWhenDismissing:;
- (BOOL)halfScreenContainerVCShouldEnableMinHeight:;
- (BOOL)halfScreenContainerVCShouldUseMinHeightWhenDidAppear:;
- (double)minContainerHeightRatioInHalfScreenContainerVC:;
- (void)componentDidMounted:;
- (void)setOldInputType:;
- (long long)oldInputType;
- (void)showGifSearchViewControllerWithInputVC:actionType:extraDidSelectEmoticonBlock:;
+ (BOOL)canCreateComponentWithContext:;
+ (id)lazyComponentWakeupInterface;
@end
