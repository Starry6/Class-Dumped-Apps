@interface IESLiveInteractSubtitleServiceImpl : NSObject
@property (nonatomic) <IESLiveInteractSubtitleServiceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)allowShowSubtitleSwitch;
- (id)confictPlaymodeName;
- (void)didSetAttachingDIContext;
- (BOOL)getSubtitleState;
- (BOOL)isSubtitleDefaultStyle;
- (BOOL)needDisableSubtitleSwitch;
- (void)openSubtitleSettingPanel:;
- (int)startSubtitle;
- (int)stopSubtitle;
- (void)updateSubtitleSetting:requestPage:completion:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
@end
