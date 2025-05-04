@interface AWEIMFeedEmojiViewComponent : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)p_createPresenter;
- (void)presenter:didUpdateWithView:;
- (void)didSelectedFansGroupFeedEmojiWithModel:;
- (void)p_updateFansGroupFeedEmojisUI;
+ (BOOL)canCreateComponentWithContext:;
@end
