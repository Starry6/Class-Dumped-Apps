@interface IESLiveInteractionConfirmPanelViewModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString iconName;
@property (nonatomic) HTSLiveImage iconImage;
@property (nonatomic) {CGSize=dd} iconSize;
@property (nonatomic) BOOL isForCameraInvite;
@property (nonatomic) @? block;
- (BOOL)isForCameraInvite;
- (void)setIsForCameraInvite:;
- (id)userAvatarUrls;
- (id)block;
- (void)setIconSize:;
- (id)iconSize;
- (id)init;
- (void)setTitle:;
- (id)iconName;
- (id)title;
- (void)setIconImage:;
- (void).cxx_destruct;
- (void)setIconName:;
- (void)setBlock:;
- (id)iconImage;
- (void)setUserAction:;
@end
