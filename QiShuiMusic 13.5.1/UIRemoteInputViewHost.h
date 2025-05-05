@interface UIRemoteInputViewHost : NSObject
@property (nonatomic) UIInputViewSet inputViewSet;
@property (nonatomic) UIRemoteInputViewInfo inputViewInfo;
@property (nonatomic) UIRemoteInputViewInfo assistantViewInfo;
@property (nonatomic) UIWindow inputViewWindow;
@property (nonatomic) UIWindow assistantViewWindow;
- (void)setInputViewSet:;
- (id)inputViewSet;
- (void).cxx_destruct;
- (id)assistantViewInfo;
- (id)assistantViewInsets;
- (BOOL)updateAssistantViewIfNecessary;
- (BOOL)updateCustomInputViewIfNecessary;
- (void)updateInputViewsIfNecessary;
- (id)inputViewInfo;
- (id)rtiGroupsForBarButtonItemGroups:;
- (id)remoteAssistantItemForResponder:;
- (id)settingsScene;
- (id)inputViewWindow;
- (id)assistantViewWindow;
@end
