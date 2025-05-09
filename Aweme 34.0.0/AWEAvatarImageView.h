@interface AWEAvatarImageView : UIView
@property (nonatomic) AWEAccessibilityImageView avatarImageView;
@property (nonatomic) CAShapeLayer maskLayer;
@property (nonatomic) UIView<AWEFeedLiveMarkViewProtocol> liveMarkView;
@property (nonatomic) AWEUserModel user;
@property (nonatomic) BOOL isShowingLiveAnimation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLiveMarkView:;
- (id)liveMarkView;
- (void)updateWithUser:needLiveStoryMark:isVsPremiere:;
- (void)updateWithUser:needLiveStoryMark:isVsPremiere:reloadLiveMark:;
- (void)accessibilityDidBecomeFocused;
- (void)updateWithUser:needLiveStoryMark:;
- (void)updateWithUser:needLiveStoryMark:isVsPremiere:reloadLiveMark:showLiveTag:;
- (void)reloadLiveMarkViewIfNeeded;
- (BOOL)showLiveMark:;
- (void)setIsShowingLiveAnimation:;
- (void)cancelImageRequest;
- (BOOL)isShowingLiveAnimation;
- (id)user;
- (void)setUser:;
- (void)dealloc;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)maskLayer;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)setMaskLayer:;
- (void)updateWithUser:;
@end
