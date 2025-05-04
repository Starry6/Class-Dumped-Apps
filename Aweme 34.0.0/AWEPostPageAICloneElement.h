@interface AWEPostPageAICloneElement : AWEPublishAndAdvanceSettingsPopupBaseCellElement
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)advanceSettingsPopupItemConfig;
- (void)didSwitherToggled:;
- (BOOL)isVisible;
- (BOOL)isEnabled;
+ (void)_aweLazyRegisterPostPage;
+ (void)setupCustomSceneRule:context:;
+ (id)type;
@end
