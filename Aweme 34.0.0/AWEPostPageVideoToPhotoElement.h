@interface AWEPostPageVideoToPhotoElement : AWEPublishAndAdvanceSettingsPopupBaseCellElement
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)abConfig;
- (void)elementAppear;
- (id)advanceSettingsPopupItemConfig;
- (void)didSwitherToggled:;
- (void)trackClickVideoToPhoto;
- (BOOL)isVisible;
- (BOOL)isEnabled;
+ (void)_aweLazyRegisterPostPage;
+ (void)setupCustomSceneRule:context:;
+ (id)type;
@end
