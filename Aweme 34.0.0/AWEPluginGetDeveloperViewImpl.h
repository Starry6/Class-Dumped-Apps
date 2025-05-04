@interface AWEPluginGetDeveloperViewImpl : NSObject
@property (nonatomic) UIButton avatarButton;
@property (nonatomic) UIButton followButton;
@property (nonatomic) BDPUniqueID uniqueID;
@property (nonatomic) BOOL isMorePanelUIStype;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)followButton;
- (void)setFollowButton:;
- (void)setIsMorePanelUIStype:;
- (BOOL)isMorePanelUIStype;
- (void)onDevButtonTap:;
- (void)onFollowButtonTap:;
- (void)changeFollowButton:forButton:;
- (void)changeFollowButtonNewStyle:forButton:;
- (void)changeFollowButtonOldStyle:forButton:;
- (id)bdp_getDeveloperView:;
- (id)init;
- (id)uniqueID;
- (void)setUniqueID:;
- (void).cxx_destruct;
- (id)avatarButton;
- (void)setAvatarButton:;
+ (id)sharedPlugin;
@end
