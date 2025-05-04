@interface AWEIMEditGroupAvatarViewModel : NSObject
@property (nonatomic) UIImage imageUploading;
@property (nonatomic) NSString imageSourceForTracking;
@property (nonatomic) UIViewController<IESIMGroupAvatarCropViewControllerProtocol> cropVC;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) Q groupAvatarSource;
@property (nonatomic) BOOL shouldNotTransferToSetting;
@property (nonatomic) Q aweim_naviBarType;
- (unsigned long long)aweim_naviBarType;
- (void)setAweim_naviBarType:;
- (void)beginEditingGroupAvatar;
- (void)beginEditingGroupAvatarWithTopNavigationController:isNeedPreview:;
- (void)setGroupAvatarSource:;
- (unsigned long long)groupAvatarSource;
- (id)cropVC;
- (void)setCropVC:;
- (BOOL)shouldNotTransferToSetting;
- (void)setShouldNotTransferToSetting:;
- (id)imageSourceForTracking;
- (void)setImageSourceForTracking:;
- (id)imageUploading;
- (void)setImageUploading:;
- (void)beginEditingGroupAvatarWithTopNavigationController:;
- (void)__uploadImage:withSessionID:;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
- (id)initWithConversation:;
@end
