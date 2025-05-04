@interface AWELiveUpdateInnerPushAvatarView : UIView
@property (nonatomic) UIView<AWEFeedLiveMarkViewProtocol> liveMarkView;
@property (nonatomic) AWEButton avatarButton;
@property (nonatomic) <AWELiveUserAvatarPreviewProtocol> avatarPreview;
@property (nonatomic) AWELiveInnerPushContentModel livePushModel;
- (void)stopPlay;
- (void)setLiveMarkView:;
- (id)liveMarkView;
- (void)startPlay;
- (id)aAWELiveModuleServiceDOUYINHTSAdaper;
- (BOOL)enablePreview;
- (void)setLivePushModel:;
- (id)livePushModel;
- (long long)p_generateCustomConfigFromPushModel;
- (id)avatarPreview;
- (void)setAvatarPreview:;
- (void)addLivePlayerPreview;
- (void)updatePushViewWithLivePush:;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setUpViews;
- (id)avatarButton;
- (void)setAvatarButton:;
+ (Class)aAWELiveModuleServiceDOUYINHTSAdaperClass;
@end
