@interface AWEIMMessageListNaviBarTitleView : UIStackView
@property (nonatomic) UIStackView avatarStackView;
@property (nonatomic) UIStackView titleContainerStackView;
@property (nonatomic) UIStackView mainTitleStackView;
@property (nonatomic) UIStackView subtitleStackView;
@property (nonatomic) <AWEIMMessageListNaviBarTitleViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_createComponents;
- (void)updateViewsAndSpacings:forPosition:;
- (id)titleContainerStackView;
- (void)p_didClickSelfWithGesture:;
- (id)mainTitleStackView;
- (id)p_organizeNaviViewsAndSpacings:toStackView:alignment:semanticContentAttribute:;
- (void)setTitleContainerStackView:;
- (void)setMainTitleStackView:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (void)setDelegate:;
- (void)setSubtitleStackView:;
- (id)subtitleStackView;
- (id)avatarStackView;
- (void)setAvatarStackView:;
@end
