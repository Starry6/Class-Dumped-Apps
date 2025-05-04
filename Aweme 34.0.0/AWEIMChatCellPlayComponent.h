@interface AWEIMChatCellPlayComponent : AWEIMChatCellComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateComponentWhenChatUpdate:;
- (void)onPresenter:willUpdateView:;
- (void)onCellWillRenderForCurrentComponent;
- (void)didClickPlayButton;
- (long long)currentComponentTailType;
- (BOOL)p_shouldShowPlayIcon:;
- (BOOL)p_isChatLatestMessageExpired:;
+ (BOOL)canCreateComponentWithContext:;
@end
